/**
 * catatan : 
 * -> kunci utama dalam pengecekan linked list ada pada traversalnya (contohnya: hapus sesuai dengan selection item, mencari item yang sama, mencari id dari dialog yang diinput, kemudian print seluruh dialog sisanya). Jadi sebisa mungkin manfaatkan traversal antar node untuk menambahkan logika-logika yang berkaitan dengan linked list
 */

#include <iostream>
#include <random>

struct Item
{
  std::string name = "";
  int amount = 0;
  Item* next = nullptr;
};

Item* createItem(std::string itemName)
{
  Item* newNode = new Item();
  newNode->name = itemName;
  newNode->next = nullptr;
  newNode->amount = 1;
  return newNode;
}

bool isEmpty(Item*& head)
{
  return ((head == nullptr) ? true : false);
}

// fungsi untuk push item ke dalam inventory
void addToInventory(Item*& head, Item*& tail, std::string itemName = "")
{
  if (itemName != "")
  {
    Item* newNode = createItem(itemName);
    std::cout << "Push item to Inventory : " << itemName << std::endl;

    // mengecek apakah nama item sama dengan node yang sudah ada
    Item* temp = head;
    while (temp != nullptr)
    {
      if (temp->name == itemName)
      {
        temp->amount++;
        return;
      }
      temp = temp->next;
      
    }

    // mengecek jika head masih kosong
    // maka tambahkan node awal untuk head dan tail
    if (isEmpty(head))
    {
      head = newNode;
      tail = newNode;
    }
    else
    { 
      // tambahkan node baru setelah tail
      tail->next = newNode;
      
      // tunjuk atau pindah tail ke node baru
      tail = newNode;
      return;
    }
  }
  else
  {
    std::cout << "Item name doesn't valid.\n";
  }
}

void useItem(Item*& head, Item*& tail)
{
  if (isEmpty(head))
  {
    std::cout << "No item to use. Inventory still empty.\n";
  }
  else
  {
    std::cout << "Used item : " << tail->name << std::endl;

    if (head == tail)
    {
      if (tail->amount > 1)
      {
        tail->amount--;
        return;
      }
      else
      {
        delete tail;
        head = tail = nullptr;
        return;
      }
      
    }
    

    Item* temp = head;

    // traversal sampai ke tail 
    while(temp->next != tail)
    {
      temp = temp->next;
    }

    // jika jumlah item lebih dari satu, maka kurangi jumlah item
    if (tail->amount > 1)
    {
      tail->amount--;
      return;
    }
    else
    {
      // hapus tail
      delete tail;
  
      // dan pindahkan tail ke node sebelum tail
      tail = temp;
  
      // set next nya menjadi nullptr
      temp->next = nullptr;
      return;
    }
  }
  
}

void top(Item*& head, Item*& tail)
{
  if (isEmpty(head))
  {
    std::cout << "Inventory still empty.\n";
  }
  else
  {
    std::cout << "Top item from inventory : " << tail->name << " | Amount: "<< tail->amount << std::endl; 
  }
}

void printInventory(Item*& head)
{
  if (isEmpty(head))
  {
    std::cout << "Can't Print, inventory still empty.\n";
  }
  else
  {
    Item* temp = head;
    std::cout << "\nItem list : \n";
    while (temp)
    {
      std::cout << "-> " << temp->name << " | " << temp->amount << std::endl;
      temp = temp->next; 
    }
    std::cout << "------\n";
  }
  
}


int main(int argc, char const *argv[])
{
  Item* h_Inventory = nullptr;
  Item* t_Inventory = nullptr;
  
  // addToInventory(h_Inventory, t_Inventory);
  // addToInventory(h_Inventory, t_Inventory, "Sword");
  // addToInventory(h_Inventory, t_Inventory, "Potion");
  // addToInventory(h_Inventory, t_Inventory, "Health Potion");
  // addToInventory(h_Inventory, t_Inventory, "Health Potion");
  // addToInventory(h_Inventory, t_Inventory, "Health Potion");
  // addToInventory(h_Inventory, t_Inventory, "Health Potion");

  // printInventory(h_Inventory);

  // std::cout << std::endl;
  // top(h_Inventory, t_Inventory);

  // std::cout << std::endl;
  // useItem(h_Inventory, t_Inventory);
  // useItem(h_Inventory, t_Inventory);
  // useItem(h_Inventory, t_Inventory);
  // useItem(h_Inventory, t_Inventory);
  // useItem(h_Inventory, t_Inventory);

  std::cout << std::endl;
  // top(h_Inventory, t_Inventory);
  
  // std::cout << "\nUndo used item : \n";
  addToInventory(h_Inventory, t_Inventory, "Health Potion");
  useItem(h_Inventory, t_Inventory);

  std::cout << std::endl;
  top(h_Inventory, t_Inventory);


  // menambahkan item curry daging ke dalam inventory sebanyak 1000 kali
  // for (int i = 1; i <= 1000; i++)
  // {
  //   addToInventory(h_Inventory, t_Inventory, "Meat Curry");
  // }

  // printInventory(h_Inventory);

  // menambahkan item acak sebanyak 1000 ke dalam inventory
  // std::string itemArr[] = {
  //   "Dust",
  //   "Ash",
  //   "Dirt"
  // };
  
  // for (int i = 1; i <= 1000; i++)
  // {
  //   addToInventory(h_Inventory, t_Inventory, itemArr[rand() % 3]);
  // }

  // printInventory(h_Inventory);

  // menambahkan item dengan urutan ke dalam inventory
  std::string indexItem = "";
  for (int i = 1; i <= 1000; i++)
  {
    indexItem = std::to_string(i);
    addToInventory(h_Inventory, t_Inventory, ("Berry " + indexItem));
  }
  
  // proses setelah di loop sebanyak 1000 kali

  // int lastIndex = 1000;
  // lastIndex++;
  // indexItem = std::to_string(lastIndex);
  // addToInventory(h_Inventory, t_Inventory, ("Berry " + indexItem));
  
  return 0;
}
