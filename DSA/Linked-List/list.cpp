#include <iostream>

struct node
{
  int value;
  node* next;
};

// head keseluruhan akan digunakan sebagai rentetan list

// menambahkan node baru di awal head
void addLast(node*& head, int value)
{
  node* newNode = new node{value, nullptr};
  
  // kondisi ini berjalan jika samping kanan kosong
  if(!head)
  {
    //jika head kosong tambahkan dan return;
    std::cout << "isi head yang kosong\n"; 
    head = newNode;
    return;
  }

  // mengecek apakah samping kanan sudah kosong atau belum 
  // jika belum kosong maka geser terus sampai kosong 
  node* temp = head; //mengambil list
  while (temp->next) // mengecek apakah nextnya sudah kosong
  {
    // debug / track
    // temp berlaku sebagai container informasi
    temp = temp->next; // mengisi list berikutnya kemudian akan di cek lagi pada kondisi while
    std::cout << "next : " << temp << std::endl;
    // std::cout << "Temp : " << temp << std::endl;
    
  }

  // Memasukkan newnode kedalam barisan paling akhir
  temp->next = newNode;

}


int main(int argc, char const *argv[])
{
  node* head = nullptr; // dipakai sebagai container dari list

  addLast(head, 10);
  addLast(head, 5);
  addLast(head, 20);
  addLast(head,30);
  

  return 0;
}
