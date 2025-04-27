#include <iostream>
#include <map>
#include <string> 
#include <climits> 

std::map<std::pair<int, int>, std::map<int, std::string>> LocationEvents;

//menambahkan event baru yang berkaitan dengan lokasi
void addEvent(int region, int zone, int time, const std::string event)
{
  if (event.empty())
  {
    std::cout << "Event tidak boleh kosong" << std::endl;
    return;
  }
  else if (region < 0 || zone < 0 || time < 0)
  {
    std::cout << "Region, zone, dan waktu tidak boleh negatif" << std::endl;
    return;
  }

  // menambagkan event ke dalam map dengan key adalah pasangan dari region dan zone
  // dan value adalah map yang berisi waktu dan event
  // map<int, std::string> adalah map yang berisi waktu dan event
  // std::pair<int, int> adalah pasangan dari region dan zone
  LocationEvents[{region, zone}][time] = event;
  std::cout << "Event " << event << " ditambahkan pada region " << region << ", zone " << zone << ", dan waktu " << time << std::endl;
}

void showEvents(int region, int zone)
{
  if (LocationEvents.empty())
  {
    std::cout << "Event masih kosong" << std::endl;
    return;
  }
  else if (region < 0 || zone < 0)
  {
    std::cout << "Region dan zone tidak boleh negatif" << std::endl;
    return;
  }

  auto it = LocationEvents.find({region, zone});
  // mengecek apakah it sama dengan ahir dari LocationEvents atau tidak
  // atau jika value dari event kosong
  if (it == LocationEvents.end() || it->second.empty())
  {
    std::cout << "Tidak ada event pada region " << region << " dan zone " << zone << std::endl;

    return;
  }

  std::cout << "Event region : " << region << ", zone : " << zone << std::endl;

  // looping untuk menampilkan event yang ada pada region dan zone tersebut
  // karena auto memangg digunakan untuk menampilkan semua tipe data yang ada pada map
  for (auto& [time, event] : it->second)
  {
    std::cout << "Waktu : " << time << ", Event : " << event << std::endl;
  }
}

void removeEvent(int region, int zone, int time)
{
  if (LocationEvents.empty())
  {
    std::cout << "Event sudah kosong, tidak bisa menghapus lagi" << std::endl;
    return;
  }
  else if (region < 0 || zone < 0 || time < 0)
  {
    std::cout << "Region, zone, dan waktu tidak boleh negatif" << std::endl;
    return;
  }

  auto it = LocationEvents.find({region, zone});
  if (it != LocationEvents.end())
  {
    it->second.erase(time);
  }
  else
  {
    std::cout << "Tidak ada event pada region " << region << " dan zone " << zone << std::endl;
    return;
  }
}

int main(int argc, char const *argv[])
{
  addEvent(1, 2, 1000, "Battle Started");
  addEvent(1, 2, INT_MAX, "Last Boss");
  addEvent(2, 3, 600, "Treasure Hunt");
  std::cout << std::endl;

  showEvents(1, 2);
  std::cout << std::endl;

  showEvents(2, 3);
  std::cout << std::endl;

  showEvents(3, 4);
  std::cout << std::endl;
  
  removeEvent(1, 2, 1000);
  std::cout << std::endl;

  showEvents(1, 2);

  removeEvent(3, 4, 5000);

  return 0;
}



