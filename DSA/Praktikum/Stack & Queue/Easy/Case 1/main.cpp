#include <iostream>

struct SaveGame
{
  int saveGameState = 0;
  SaveGame *next = nullptr;
};

// stack memiliki konsep LIFO
// fungsi yang ada :
// remove last -> digunakan untuk Undo
// add last -> digunakan untuk add new save 


// fungsi untuk membuat node baru
// fungsi dibuat untuk memisahkan pertambahan node dengan pembuatan node
// dengan fungsi ini program lebih modular karena bisa digunakan untuk addfirst dan addnext
SaveGame* createSave(int state)
{
  SaveGame *newNode = new SaveGame();
  newNode->saveGameState = state;
  newNode->next = nullptr;

  return newNode;
}

// fungsi untuk menambah save 
void push(SaveGame*& head, SaveGame*& tail, int state)
{
  SaveGame* newNode = createSave(state);
  std::cout << "Push: " << state << " (save)\n";

  // jika head kosong, maka tambahkan node baru ke head dan tunjuk head sebagai tail juga
  if (head == nullptr)
  {
    // head digunakan sebagai bentuk utama linked list
    head = newNode;
    // std::cout << "head : " << head->saveGameState << std::endl;

    // sedangkan tail digunakan sebagai penunjuk akhir dari linked list
    // jika linked list hanya memiliki head, maka tail akan menunjuk head tersebut sebagai akhirnya (tailnya)
    tail = newNode;
    // std::cout << "tail : " << tail->saveGameState << std::endl;
  }

  // jika head sudah ada maka lanjut tail yang akan ditambahkan
  else
  {
    // memasukkan new node setelanya
    tail->next = newNode;
    // std::cout << "tail->next : " << tail->next->saveGameState << std::endl;

    // merubah tail ke newNode
    tail = newNode;
    // std::cout << "tail : " << tail->saveGameState << std::endl;
  } 
  
}

void addFirst(SaveGame*& head, SaveGame*& tail, int state)
{
  SaveGame *newNode = createSave(state);

  // jika head kosong maka, tambahkan node baru ke dalam head dan tail
  if (head == nullptr)
  {
    head = newNode;
    std::cout << "head : " << head->saveGameState << std::endl;

    tail = newNode;
    std::cout << "tail : " << tail->saveGameState << std::endl;
  }
  // jika head tidak kosong maka
  else
  {
    // next dari newnode akan diisi oleh head
    // istilahnya memindah head ke dalam newNode
    newNode->next = head;
    std::cout << "head->next : " << newNode->next->saveGameState << std::endl; 

    // yang kemudian head akan diisi oleh newNode yang sudah ada head sebelumnya di next nya
    // istilahnya mengganti head dengan head baru dari newNode
    head = newNode;
    std::cout << "head : " << head->saveGameState << std::endl; 

  }
}

void printSaveList(SaveGame*& head)
{
  // memasukkan ke temp kemudian digunakan untuk berpindah node dan di print
  SaveGame* temp = head;

  // selama temp (node) bukan null
  while (temp)
  {
    std::cout << "State : " << temp->saveGameState << std::endl;
    temp = temp->next;
  }
  
  std::cout << "-- NULL\n";  
} 

// void topWithHead(SaveGame*& head)
// {
//   SaveGame* temp = head;
//   while (temp->next != nullptr)
//   {
//     temp = temp->next;
//   }
//   std::cout << "Top : " << temp->saveGameState << std::endl;
  
// }

bool empty(SaveGame*& head)
{
  if (head == nullptr)
  {
    // std::cout << "List Empty !\n";
    return true;
  }
  else 
  {
    // std::cout << "List not Empty !\n";
    return false;
  }
}

void pop(SaveGame*& head)
{
  // kondisi jika list tidak ada isinya atau kosong
  if (empty(head))
  {
    std::cout << "No saves to undo.\n";
    return;
  }

  // mengecek apakah setelah head kosong
  // jika kosong maka hapus head dan set head menjadi null
  if (head->next == nullptr)
  {
    std::cout << "Undo action, game state: " << head->saveGameState << std::endl;
    delete head;
    head = nullptr;
    return;
  }
  
  SaveGame* temp = head;

  // cek apakah samping kanan 1 dan samping kanan 2 nya kosong atau tidak
  // jika samping 2 kosong maka berhentikan loop dan set temp dengan urutan node kedua dari akhir
  while (temp->next && temp->next->next != nullptr)
  {
    temp = temp->next;
  }

  std::cout << "Undo action, game state: " << temp->next->saveGameState << std::endl;

  // hapus node terakhir dan set ke null
  delete temp->next;
  temp->next = nullptr;
  
}

void top(SaveGame*& head, SaveGame*& tail)
{
  if (empty(head))
  {
    std::cout << "Top : save still empty.\n"; 
  }
  else
  {
    std::cout << "Top : " <<  head->saveGameState << std::endl;
  }
}

int main(int argc, char const *argv[])
{
  SaveGame* head = nullptr;
  SaveGame* tail = nullptr;

  // top(head,tail);

  // std::cout << std::endl;
  
  // push(head, tail, 1);
  // push(head, tail, 2);

  addFirst(head, tail, 1);
  addFirst(head, tail, 2);
  addFirst(head, tail, 3);

  printSaveList(head);

  top(head, tail);

  // std::cout << std::endl;

  // top(head, tail);

  // std::cout << std::endl;

  // pop(head);
  // pop(head);
  // pop(head);

  // for (int i = 1; i <= 1000; i++)
  // {
  //   push(head, tail, i);
  // }
  

  return 0;
}
