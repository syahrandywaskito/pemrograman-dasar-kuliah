#include <iostream>

struct Quest
{
  Quest* next;
  std::string questName;
  bool complete;
};

// removeFirst untuk quest yang expired 
Quest* removeExpiredQuest(Quest* head)
{
  if (head == nullptr)
  {
    return nullptr;
  }

  Quest *temp = head;
  
  head = head->next;
  
  delete temp;
  
  return head;
}

// addLast untuk menambah quest 
void addQuest(Quest*& head, std::string questName)
{
  Quest *newQuest = new Quest{nullptr, questName, false};

  if (!head)
  {
    head = newQuest;
    return;    
  }

  Quest *temp = head;
  // mengecek node sebelahnya apakah null atau tidak
  while (temp->next)
  {
    temp = temp->next;
  }

  // tambahkan new node di sebelahnya
  temp->next = newQuest;
  
}

// remove quest berdasarkan status dan namanya
void questComplete(Quest*& head, std::string questName, bool isComplete)
{
  Quest *temp = head;
  while (temp->next)
  {
    if (temp->next->questName == questName)
    {
      temp->next->complete = isComplete;
      
      if (temp->next->complete)
      {
        Quest* nextNode = temp->next->next;
        delete temp->next;
        temp->next = nextNode;
      }
      else
      {
        std::cout << "Quest belum selesai !!\n";
      }
    }

    temp = temp->next;
  }
}

// menampilkan quest list 
void showQuest(Quest* head)
{
  Quest* temp = head;
  std::cout << "\nQuest : \n-------------\n";
  while (temp)
  {
    std::cout << "- " << temp->questName << std::endl;
    temp = temp->next;
  }
  std::cout << "---------------\n";
  
}


int main(int argc, char const *argv[])
{
  Quest* quesList = nullptr;

  addQuest(quesList, "Contract : Lord Of The Wood");
  addQuest(quesList, "Contract : Missing Brother");
  addQuest(quesList, "Contract : Dragon");

  showQuest(quesList);

  std::cout << "\nQuest expired !!\n";
  quesList = removeExpiredQuest(quesList);
  
  showQuest(quesList);

  std::cout << "\nQuest Added !!\n";
  addQuest(quesList, "Contract : Creature of Oxenfort Forest");

  showQuest(quesList);

  std::cout << "\nQuest -> Contract : Dragon complete !!\n";
  questComplete(quesList, "Contract : Dragon", true);

  showQuest(quesList);
  return 0;
}

