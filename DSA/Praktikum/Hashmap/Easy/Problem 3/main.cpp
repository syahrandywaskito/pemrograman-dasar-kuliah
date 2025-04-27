#include <iostream>
#include <map>

std::map<float, std::string> questTracker;

void addQuest(float questID, std::string questName)
{
  if (questname.empty())
  {
    std::cout << "Quest name tidak boleh kosong" << std::endl;
    return;
  }
  else if (questID < 0)
  {
    std::cout << "Quest ID tidak boleh negatif" << std::endl;
  }

  questTracker[questID] = questName;
  std::cout << "-> " << questID << " : " << questName << std::endl;
}

void showQuest()
{
  if (questTracker.empty())
  {
    std::cout << "Quest tracker masih kosong" << std::endl;
    return;
  }

  std::cout << "\nQuest Tracker: \n";
  for (auto& tracker : questTracker)
  {
    std::cout << "-> " << tracker.first << " : " << tracker.second << std::endl;
  }
}

void findClosestQuest(float questID)
{
  // mengecek kekosongan quest tracker
  if (questTracker.empty())
  {
    std::cout << "Quest tracker masih kosong" << std::endl; 
    return ;
  }

  // mendapatakan lower bound dari questID 
  auto it = questTracker.lower_bound(questID);
  
  // jika it (penunjuk iterator) sama dengan akhir dari map, maka geser map satu langkah ke arah kiri atau depan 
  if (it == questTracker.end())
  {
    --it;
  }
  // selama it bukan sama dengan awal dari map, masuk ke kondisi
  else if (it != questTracker.begin())
  {
    // mendapatkan data sebelum dari it 
    auto prevIt = std::prev(it);
    // komparasi menggunakan abs() untuk mendapatkan jarak terdekat
    // jika jika kondisi benar maka masukkan nilai ke it
    if (abs(prevIt->first - questID) <= abs(it->first - questID))
    {
      it = prevIt;
    }
  }

  // mengecek kembali data dari awal hingga akhir
  if (it != questTracker.end())
  {
    std::cout << "\nQuest terdekat : " << it->first << " : " << it->second << std::endl;
  }
  else
  {
    std::cout << "Tidak ada quest terdekat" << std::endl;
  }
}

int main(int argc, char const *argv[])
{
  // Contoh penggunaan
  addQuest(1, "Find the Sword");
  addQuest(3, "Rescue the Villager");
  addQuest(5, "Defeat the Dragon");
  addQuest(INT_MAX, "Secret Quest");

  cout << "All Quests:\n";
  showQuests();

  cout << "\nFind quest closest to 3.5:\n";
  findClosestQuest(4);

  cout << "\nFind quest closest to -1:\n";
  findClosestQuest(-1); // tidak bisa karena ada exception untuk quest id jika negatif
  return 0;
}
