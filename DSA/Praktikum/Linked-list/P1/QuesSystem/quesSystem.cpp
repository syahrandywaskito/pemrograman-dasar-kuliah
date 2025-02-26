#include <iostream>
#include <string>

struct Quest
{
  Quest* next;
  std::string quesName;
};

// todo : membuat penambahan quest 
// todo : remove quest dari value 

void addQuest(Quest*& head, std::string questName)
{
  // buat new node, dengan value utama nya
  // - untuk next akan di null, karene new node itu berdiri sendiri 
  // - questName akan dimasukkan dari parameter questName
  // maka node baru adalah node tunggal yang tidak terhubung satu sama lain sebelum dihubungkan
  Quest* newQuest = new Quest{nullptr, questName}

  if (head == null)
  {
    head = newNode;
    return;
  }

  // buat variabel temporari untuk memasukkan head guna mengecek sampingnya
  Quest* temp = head;
  // cek temp selama tidak null maka ganti node ke sampignya
  while (temp)
  {
    temp = temp->next; // geser kesebelahnya
  }
  
  // jika loop selesai (sebelahnya kosong)
  // maka tambahkan node baru di sebelahnya
  // next akan mereferensikan ke node baru kemudian node baru itu akan diisi oleh new node 
  temp->next;
  
}

// Quest* deleteQuest()

void questFinish(std::string questName)
{
  // todo : mengambil list head dan cari quest yang sudah selesai kemudian hapus quest
}


int main(int argc, char const *argv[])
{
  
  

  return 0;
}

