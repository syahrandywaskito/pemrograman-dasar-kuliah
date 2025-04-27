#include <iostream>
#include <string>
#include <map>
#include <vector>

std::map<int, std::vector<std::string>> EnemySpawns;

void addEnemySpawn(int spawnPoint, std::string enemyName)
{
  if (enemyName.empty())
  {
    std::cout << "Nama musuh tidak boleh kosong" << std::endl;
    return;
  }
  else if (spawnPoint < 0)
  {
    std::cout << "Spawn point tidak boleh negatif" << std::endl;
    return;
  }

  // menambahkan musuh ke spawn point yang sesuai
  // menggunakan push_back untuk menambahkan musuh ke dalam vector
  // vector berperan sebagai array dinamis
  // yang dapat menampung banyak musuh di spawn point yang sama
  EnemySpawns[spawnPoint].push_back(enemyName);
  std::cout << "Time : " << spawnPoint << " muncul musuh : " << enemyName << std::endl;
}

void printEnemySpawns()
{
  if (EnemySpawns.empty())
  {
    std::cout << "Tidak ada musuh yang ditambahkan" << std::endl;
    return;
  }
  else
  {
    std::cout << "\nDaftar Musuh di Spawn Point:\n";
    // looping pertama untuk menampilkan spawn point (map)
    for (const auto& spawn : EnemySpawns)
    {
      std::cout << "Spawn Time " << spawn.first << ": ";
      // looping kedua untuk menampilkan musuh di spawn point tersebut (vector)
      // spawn.second adalah container yang memuat string dari vector
      for (const auto& enemy : spawn.second)
      {
        std::cout << enemy << " -> ";
      }
      std::cout << " END";
      std::cout << std::endl;
    }
  }
}

void retrieveEnemy(int queryTime)
{
  if (EnemySpawns.empty())
  {
    std::cout << "Stack dari enemy masih kosong" << std::endl;
    return;
  }
  else if (queryTime < 0)
  {
    std::cout << "Query time tidak boleh negatif" << std::endl;
    return;
  }

  // menampilkan musuh yang muncul dibawah query time yang diberikan
  auto it = EnemySpawns.upper_bound(queryTime);

  // std::cout << "Begin :" << EnemySpawns.begin()->first << std::endl;
  // std::cout << "Lowerbound : " << it->first << std::endl;
  
  // jika it (hasil dari find upperbound menggunakan query time)
  // sama dengan begin() (awal dari map) maka ada keterangan tidak muncul musuh apa apa
  if (it == EnemySpawns.begin()) 
  {
    std::cout << "No enemies found.\n";
    return;
  } 
  else 
  {
    --it; // menunjuk ke elemen sebelumnya
    std::cout << "Enemies at time " << it->first << ":\n";
    for (const auto& enemy : it->second) 
    {
      std::cout << "- " << enemy << "\n";
    }
  }
}


int main()
{
  addEnemySpawn(10, "Goblin");
  addEnemySpawn(10, "Orc");
  addEnemySpawn(20, "Troll");
  addEnemySpawn(20, "Skeleton");

  std::cout << "\nMenambahkan spawn dengan nilai negatif\n";
  addEnemySpawn(-20, "undead");

  std::cout << std::endl;
  retrieveEnemy(20); // Musuh yang muncul pada waktu 10

  addEnemySpawn(INT_MAX, "IDEA OF EVIL");
  retrieveEnemy(INT_MAX);

  printEnemySpawns();

  return 0;
}
