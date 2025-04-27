// pair adalah tipe data yang digunakan untuk menyimpan dua nilai
// pair adalah template class yang ada di dalam library <utility>

#include <iostream>
#include <string>
#include <unordered_map>


// fungsi untuk menambah map
void addPlayerScore(std::unordered_map<std::string, int>& p, std::string playerName, int score)
{
  if (playerName.empty())
  {
    std::cout << "Nama pemain tidak boleh kosong" << std::endl;
    return;
  }
  else if (score < 0)
  {
    std::cout << "Score tidak boleh negatif" << std::endl;
    return;
  }
  
  p[playerName] = score;
  std::cout << playerName << " score : " << score << std::endl;
}

void printAll(const std::unordered_map<std::string, int>& p)
{
 
  // mengguanakan auto untuk menunjuk ke setiap kontainer kemudian ditampilkan
  if (p.empty())
  {
    std::cout << "Map kosong " << std::endl;
    return;
  }
  else
  { 
    for (const auto& s : p)
    {
      std::cout << s.first << " : " << s.second << std::endl;
    }
  }
}

int findScore(const std::unordered_map<std::string, int>& p, std::string playerName)
{
 if (p.empty())
	{
		std::cout << "Map masih kosong" << std::endl;
		return 0;
	}
	

  auto it = p.find(playerName);

  if (it != p.end())
  {
    return 1;
  }
  else if (playerName == "Ghost")
  {
    return -1;
  }
  else
  {
    return 0;
  }

}

void findWithScore(const std::unordered_map<std::string, int>& p, int targetScore)
{
  if (p.empty())
  {
    std::cout << "Map kosong" << std::endl;
    return;
  }
  else
  {
    for (auto& s : p)
    {
      if(s.second == targetScore)
      {
        std::cout << "Pemain dengan score " << targetScore << " adalah " << s.first << std::endl;
      }
    }
  }
  
}

// menghapus player dari map
void erasePlayer(std::unordered_map<std::string, int>& p, std::string playerName)
{
  if (p.empty())
  {
    std::cout << "Map kosong" << std::endl;
    return;
  }
  else if (playerName.empty())
  {
    std::cout << "Nama pemain tidak boleh kosong" << std::endl;
    return;
  }
  
  auto it = p.find(playerName);
  if (it != p.end())
  {
    p.erase(it);
    std::cout << playerName << " telah dihapus dari daftar" << std::endl;
  }
  else
  {
    std::cout << playerName << " tidak ada dalam daftar" << std::endl;
  }
}


int main(int argc, char const *argv[])
{
  // mendefinisikan unordered map bernama playerscore
  std::unordered_map<std::string, int> PlayerScore;
 
  addPlayerScore(PlayerScore, "Alice", 100);

  // menambahkan player dengan score nilai maksimal dari INT
  addPlayerScore(PlayerScore, "Andre", INT_MAX);

  printAll(PlayerScore);

  std::cout << "Find alice : " << findScore(PlayerScore, "Alice") << std::endl;
  std::cout << "Find Bob : " << findScore(PlayerScore, "Bob") << std::endl;
  std::cout << "Find Ghost : " << findScore(PlayerScore, "Ghost") << std::endl;
  

  return 0;
}
