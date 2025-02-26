#include <iostream>
#include <string>

struct Item
{
    Item* next;
    std::string itemName;
};

// logika tambah next 
// - buat node baru yang diisi oleh value dari parameter tambah
// - mengecek apakah head dari list kosong atau tidak
// - jika kosong maka masukkan node baru ke head langsung 
// - jikat tidak maka cek apakah next node ada atau tidak
// - jika tidak ada maka langsung masukkan 
// - jika ada maka cari sebelahnya sampai sebelahnya kosong

void addNext(Item*& head, std::string itemName)
{
    Item* newNode = new Item{nullptr, itemName};
    
    // cek apakah head == null
    if (!head)
    {
      head = newNode;
      return;
    }

    // jika head tidak kosong maka cek setelahnya
    Item* temp = head;
    while(temp->next)
    {
      temp = temp->next; // memasukkan next kedalam temp untuk merubah temp menjadi node selanjutnya kemudian di cek lagi di while

    }
    
    // setelah loop selesai maka tambahkan node baru kedalam next
    temp->next = newNode;
}

void showList(Item*& head)
{
  Item* temp = head; // mengambil list 
  while (temp)
  {
    std::cout << temp->itemName << "->";
    temp = temp->next;
  }
  std::cout << "null";

}


// digunakan untuk menghitung counter 
// dan mengembalikan hasil dari perhitungan
int countInventory(Item*& head)
{
  Item* temp = head;
  int counter = 0;
  while (temp)
  {
    temp = temp->next;
    counter++;
  }

  return counter;
}

Item* deleteLast(Item*& head)
{
  if (head == nullptr)
  {
    return nullptr;
  }

  Item* temp = head;
  head = head->next;

  delete temp; 
  return head;
}


int main(int argc, char const *argv[])
{
  Item* headList = nullptr;

  const int maxInventory = 3;
  
  addNext(headList, "potion");
  addNext(headList, "Sword");
  addNext(headList, "Sword");
  showList(headList);

  std::cout << "\nMenambah satu item lagi \n";
  addNext(headList, "bow");

  if (countInventory(headList) > 3)
  {
    headList = deleteLast(headList);
  }

  // tampilkan lagi 
  showList(headList);


  return 0;
}
