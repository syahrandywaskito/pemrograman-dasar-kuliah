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

void questFinish(Quest*& head ,std::string questName)
{
  if (head == null)
  {
    return;
  }

  // todo : mengambil list head dan cari quest yang sudah selesai kemudian hapus quest
  Quest* temp = head;
  // mengecek apakah temp bukan null
  while (temp)
  {

    // saat menghapus maka ubah dulu head ke nextnya kemudian delete temp

    // todo : cek apakah quest name parameter sama dengan quest name dari head 
    if (temp->quesName == questName)
    {
      std::cout << "quest " << questName << " telah dihapus" << std::endl;
      head = head->next; // ubah head ke next nya atau geser head
      delete temp; // hapus temp
      return; // kembalikan fungsi
    }

    // masukkan nextnya;
    temp = temp->next;
  }
  
}

void showQuestList(Quest*& head)
{
    // temp akam berfungsi sebagai variabel untuk memanipulasi link
    // tanpa harus merubah head yang asli

    Quest* temp = head; 
    while (temp)
    {
      std::cout << "* Quest name : " << temp->quesName << std::endl;
      temp = temp->next // ambil next list
    }
    std::cout << "* list end" << std::endl;
    
}


int main(int argc, char const *argv[])
{
  
  Quest* lisQuest = nullptr; // deklarasi awal
  
  

  return 0;
}

