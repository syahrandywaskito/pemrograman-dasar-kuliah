#include <iostream>
#include <string>
#include <map>

std::map<std::string, int> Inventory;

void addToInventory(std::string itemName, int quantity)
{
  if (itemName.empty())
  {
    std::cout << "Nama item tidak boleh kosong" << std::endl;
    return;
  }
  else if (quantity < 0)
  {
    std::cout << "Kuantitas dari item tidak boleh negatif" << std::endl;
    return;
  }

  // saat ada item yang sama, maka jumlahnya akan ditambahkan
  Inventory[itemName] += quantity;
  std::cout << itemName << " ditambahkan dengan jumlah : " << quantity << std::endl;
}

void printInventory()
{
  if (Inventory.empty())
  {
    std::cout << "Inventory masih kosong" << std::endl;
    return;
  }
  else
  {
    std::cout << "\nInventory : \n";
    for (const auto& item : Inventory)
    {
      std::cout << "-> " << item.first << ": " << item.second << std::endl;
    }
  }
}

void removeItem(std::string itemName)
{
  if (Inventory.empty())
  {
    std::cout << "Inventory sudah kosong" << std::endl;
    return;
  }
  else if(itemName.empty())
  {
    std::cout << "Nama item tidak boleh kosong" << std::endl;
    return;
  }

  auto it = Inventory.find(itemName);
  if (it != Inventory.end())
  {
    if (it->second > 1)
    {
      it->second--;
      std::cout << "Item " << itemName << " dikurangi 1" << std::endl;
    }
    else
    {
      Inventory.erase(it);
      std::cout << "Item " << itemName << " dihapus dari inventory" << std::endl;
    }
  }
  else
  {
    std::cout << "Item " << itemName << " tidak ditemukan di inventory" << std::endl;
  }
  
}

int findItemQuantity(std::string itemName)
{
  if (Inventory.empty())
  {
    std::cout << "Inventory masih kosong" << std::endl;
    return 0;
  }
  else if(itemName.empty())
  {
    std::cout << "Nama item tidak boleh kosong" << std::endl;
    return -1;
  }

  auto it = Inventory.find(itemName);
  if (it != Inventory.end())
  {
    return it->second;
  }
  else
  {
    std::cout << "Item " << itemName << " tidak ditemukan di inventory" << std::endl;
    return -1;
  }
}

int main()
{
  addToInventory("Sword", 5);
  addToInventory("Shield", 3);
  addToInventory("Potion", 10);
  addToInventory("Crossbow", 1);

  printInventory();
  std::cout << std::endl;

  std::cout << "Jumlah item Potion: " << findItemQuantity("Potion") << std::endl;
  std::cout << std::endl;

  removeItem("Sword");
  removeItem("Crossbow");
  
  printInventory();
  
  return 0;
}