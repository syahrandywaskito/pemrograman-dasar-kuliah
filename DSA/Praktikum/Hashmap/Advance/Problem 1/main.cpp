#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

struct Player
{
  std::string name;
  int skillPoint;
};

std::map<int, std::vector<Player>> skillBuckets;

void addPlayer(const Player& player)
{
  // mengecek apakah nama player kosong atau tidak
  if (player.name.empty())
  {
    std::cout << "Nama player tidak boleh kosong" << std::endl;
    return;
  }
  // mengecek apakah skill point player negatif atau tidak
  else if (player.skillPoint < 0)
  {
    std::cout << "Skill point tidak boleh negatif" << std::endl;
    return;
  }

  // menambahkan player ke dalam skill buckets, dengan key nya adalah player skill point dan isi dari vector adalah struct Player
  skillBuckets[player.skillPoint].push_back(player);

  std::cout << "Player " << player.name << " dengan skill point " << player.skillPoint << " ditambahkan" << std::endl;
}

Player* findNearest(int targetskill)
{
  if (skillBuckets.empty())
  {
    std::cout << "Skill buckets masih kosong" << std::endl;
    return nullptr;
  }

  auto it = skillBuckets.lower_bound(targetskill);

  if (it == skillBuckets.end())
  {
    // jika iterator berada di akhir, maka kita ambil iterator sebelumnya
    it = std::prev(it);
  }
  else if (it != skillBuckets.begin())
  {

    auto prevIt = std::prev(it);

    // membandingkan skill point player yang lebih dekat dengan target skill point
    if (std::abs(prevIt->first - targetskill) < std::abs(it->first - targetskill))
    {
      it = prevIt;
    }
  }

  // mengecek apakah vector player kosong atau tidak
  if (!it->second.empty())
  {
    // mengembalikan pointer ke player pertama dalam vector
    return &it->second.front();
  }

  return nullptr;
  
}

Player* getMinSkill()
{
  if (skillBuckets.empty())
  {
    std::cout << "Skill buckets masih kosong" << std::endl;
    return nullptr;
  }

  // menggunakan iterator untuk mendapatkan elemen pertama
  auto it = skillBuckets.begin();

  if (!it->second.empty())
  {
    return &it->second.front();
  }

  return nullptr;
}

Player* getMaxSkill() 
{
  if (skillBuckets.empty())
  {
    return nullptr;
  } 
  // menggunakan reverse iterator untuk mendapatkan elemen terakhir
  auto it = skillBuckets.rbegin();

  // mengecek apakah vector player kosong atau tidak
  if (!it->second.empty()) 
  {
    return &(it->second.front());
  }
  return nullptr;
}

void removePlayer(const Player& player)
{
  auto it = skillBuckets.find(player.skillPoint);

  if (it != skillBuckets.end()) 
  {
    auto& players = it->second;
    
    players.erase(std::remove_if(players.begin(), players.end(), [&](const Player& p) {
      return p.name == player.name;
    }), players.end());

    // Jika vector kosong, hapus bucket
    if (players.empty()) 
    {
      skillBuckets.erase(it);
    }
  }
}

int main()
{
  
  addPlayer({"Alice", 1100});
  addPlayer({"Bob", 1300});
  addPlayer({"Charlie", 1100}); 

  Player* nearest = findNearest(1150);
  if (nearest) 
  {
    std::cout << "Nearest player to 1150: " << nearest->name << " (" << nearest->skillPoint << ")\n";
  } 
  else 
  {
    std::cout << "No players found near 1150.\n";
  }

  Player* minSkillPlayer = getMinSkill();
  if (minSkillPlayer) 
  {
    std::cout << "Player with min skill: " << minSkillPlayer->name << " (" << minSkillPlayer->skillPoint << ")\n";
  }

  Player* maxSkillPlayer = getMaxSkill();
  if (maxSkillPlayer) 
  {
    std::cout << "Player with max skill: " << maxSkillPlayer->name << " (" << maxSkillPlayer->skillPoint << ")\n";
  }

  removePlayer({"Alice", 1100});
  std::cout << "Alice removed.\n";

  nearest = findNearest(1150);
  if (nearest) 
  {
    std::cout << "Nearest player to 1150 after remove: " << nearest->name << " (" << nearest->skillPoint << ")\n";
  } 
  else 
  {
    std::cout << "No players found near 1150 after remove.\n";
  }

  return 0;
}