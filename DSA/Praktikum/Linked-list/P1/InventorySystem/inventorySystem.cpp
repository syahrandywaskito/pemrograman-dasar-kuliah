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


// penggunaan item*& digunakan untuk mengambil reference bukan langsung dari struct tapi dari 
// variabel yang menggunakan struct 


void addNext(Item*& head, std::string itemName)
{
    Item* newNode = new Item{nullptr, itemName};
    
    // cek apakah head == null
    if (!head)
    {
      head = newNode;
      // std::cout << "\nNama item yang menjadi Head : " << head->itemName << std::endl;
      return;
    }

    // jika head tidak kosong maka cek setelahnya
    Item* temp = head;
    while(temp->next)
    {
      temp = temp->next; // memasukkan next kedalam temp untuk merubah temp menjadi node selanjutnya kemudian di cek lagi di while
      // std::cout << "item name : " << temp->itemName << std::endl;

    }
    
    // setelah loop selesai maka tambahkan node baru kedalam next
    // std::cout << "Item terakhir : " << temp->itemName << std::endl;
    // std::cout << "Node sampingnya : " << temp->next << std::endl;
    temp->next = newNode;
}

void removeLast(Item*& head)
{
  // mengecek apakah head kosong atau tidak
  if(head == nullptr)
  {
    std::cout << "\nHead Kosong\n";
    return;
  }

  // mengecek apakah next dari head kosong atau tidak
  if (head->next == nullptr)
  {
    delete head;
    head = nullptr;
    return;
  }
  

  // mengambil head kemudian diletakkan di dalam temp yang kemudian temp tersebut akan di loop untuk mengecek apakah next nya kosong atau tidak
  Item *temp = head;

  // lakukan loop jika node samping 1 dan node samping 2 bukan null 
  // lakukan terus dengan menggeser temp ke node sebelahnya 
  // kemudian cek kembali kondisi pertama
  // jika keduannya masih ada maka lanjutkan 
  // jika samping 2 kosong maka hentikan loop
  
  // loop berhenti dengan posisi di samping kiri tail
  while (temp->next && temp->next->next != nullptr)
  {
    
    // std::cout << "\nTemp : " << temp << " -> " << temp->itemName << std::endl;
    
    // std::cout << "temp->next : " << temp->next << " -> " << temp->next->itemName << std::endl;
    
    // std::cout << "temp->next->next : " << temp->next->next << " -> " << temp->next->next->itemName << std::endl;
    
    // std::cout << "Kondisi loop ini : " << (temp->next && temp->next->next != nullptr) << std::endl;
    
    // std::cout << "----------------\n";
    temp = temp->next;

  }
  // std::cout << "\nlast address linked list : " << temp->next << " -> " << temp->next->itemName << std::endl;
  delete temp->next;
  temp->next = nullptr;

  // temp->next = nullptr;
}


void showList(Item*& head)
{
  Item* temp = head; // mengambil list 
  std::cout << "\nIsi dari Inventory\n";
  std::cout << "----------------" << std::endl;
  while (temp)
  {
    // std::cout << temp->itemName << "->";
    // if (temp->itemName != "Sword")
    // {
    //   // std::cout << "sword must be skipped\n";
    //   std::cout << "Address : " << &temp->next << " -> " << temp->itemName << std::endl;
    // }

    std::cout << "Address : " << temp << " -> item name : " << temp->itemName << std::endl;
    temp = temp->next; // menggeser ke node sebelahnya
  }
  std::cout << "----------------" << std::endl;
}


// digunakan untuk menghitung counter 
// dan mengembalikan hasil dari perhitungan
int countInventory(Item*& head)
{
  // ambil headlist (pusat dari list)
  Item* temp = head;
  
  int counter = 0;

  // cek apakah temp ada atau tidak.
  // temp disini akan menjadi kondisi yang didalamnya akan dimasukkan referensi dari next 
  while (temp)
  {
    // masukkan addresss dari next node kedalam temp
    // kemudian temp akan digunakan lagi sebagai kondisi di dalam loop
    // jika address yang dimasukkan ternyata null maka berhentikan loop;
    temp = temp->next;

    counter++; // tambah counter untuk menunjukan jumlah dari linked list
  }

  return counter;
}


// menggunakan struct Item sebagai tipe data karena fungsi akan mengembalikan struct 
Item* deleteFirst(Item*& head)
{
  // mengecek apakah head pointer kosong atau tidak
  if (head == nullptr)
  {
    // jika kosong maka return bahwa benar pointer ini memang kosong
    return nullptr;
  }

  // jika ada, maka masukkan head (list) ke dalam temp
  Item* temp = head;

  // head akan diassign oleh next dari head
  // pindah head ke node sampingnya
  head = head->next;
  // std::cout << "head next : " << head->next << " -> " << head->itemName << std::endl;

  // setelah temp terisi dengan head awal maka hapus temp
  delete temp; 

  // kembalikan head untuk dimasukkan kedalam headlist
  return head;
}

void addFirst(Item*& head, std::string itemName)
{
  // buat node baru
  Item* newNode = new Item{nullptr, itemName};

  // set itemName di node baru dengan value dari parameter
  newNode->itemName = itemName;

  // set next dari newNode dengan head sekarang
  // ketika next dari newNode diisi oleh head sebelumnya
  // maka otomatis semua node yang ada di head sebelumnya akan ikut ke dalam new node
  newNode->next = head;

  // dan saat head dirubah menjadi newNode, semua head tidak akan hilang karena 
  // next dari newNode mengandung semua node dari head sebelumnya
  // set head dengan newNode yang membawa semua list dari head sebelumnya
  head = newNode;
}

// remove item dari valuenya 
// ambil head dari list 
// loop node untuk mencari item yang cocok dengan cara menggeser temp
// jika value cocok dengan parameter maka hapus node tersebut
// sebelum terhapus, ambil node sampingnya lagi dan masukkan ke node nextnya

void removeByValue(Item*& head, std::string itemName)
{
  Item* temp = head;
  while (temp->next)
  {
    if (temp->next->itemName == itemName)
    {
      Item* nextNode = temp->next->next;
      delete temp->next;
      temp->next = nextNode;
      return;
    }
    
    temp = temp->next;
  }
  std::cout << "Item tidak ada !!\n";
}


int main(int argc, char const *argv[])
{
  // disini konsep head adalah sebagai pusat dari list
  // disini mendeklariskan headlist sebagai awal dari list

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
    headList = deleteFirst(headList);
  }

  // tampilkan lagi 
  showList(headList);

  addNext(headList, "potion");
  addNext(headList, "shield");
  addNext(headList, "crossbow");

  removeLast(headList);
  showList(headList);

  removeLast(headList);
  showList(headList);

  headList = deleteFirst(headList);
  showList(headList);

  addFirst(headList, "Dagger");
  addFirst(headList, "Staff");
  addNext(headList, "Wand");
  showList(headList);


  removeByValue(headList, "Sword");
  showList(headList);

  removeByValue(headList, "bow");
  showList(headList);

  return 0;
}
