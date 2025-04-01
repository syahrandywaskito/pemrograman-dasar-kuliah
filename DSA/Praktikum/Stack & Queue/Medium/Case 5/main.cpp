#include <iostream>

struct Quest
{
  Quest* next;
  std::string questName;
};

Quest* createQuest(std::string questName)
{
  Quest* node = new Quest();
  node->next = nullptr;
  node->questName = questName;

  return node;
}

bool isEmpty(Quest*& head)
{
  return ((head == nullptr) ? true : false);
}

void push(Quest*& head, Quest*& tail, std::string questName = "", bool msg = true)
{
  if (questName != "")
  {
    Quest* newNode = createQuest(questName);

    if (msg)
    {
      std::cout << "Push quest: " << questName << std::endl;
    }
    
    if (isEmpty(head))
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }    
  }
  else
  {
    std::cout << "Quest name not valid.\n";
  }
}

void pop(Quest*& head, Quest*& tail, bool msg = true)
{
  if (isEmpty(head))
  {
    std::cout << "Quest already empty\n";
    return;
  }

  if (head == tail)
  {
    if (msg)
    {
      std::cout << "Undo quest: " << tail->questName << std::endl;
    }
    
    delete tail;
    head = tail = nullptr;
    return;
  }
  
  if (msg)
  {
    std::cout << "Undo quest: " << tail->questName << std::endl;
  }
  

  Quest* temp = head;
  while (temp->next != tail)
  {
    temp = temp->next;
  }
  
  delete tail;
  tail = temp;
  temp->next = nullptr;
  
}

std::string top(Quest*& head, Quest*& tail)
{
  return (isEmpty(head) ? "Quest is empty. " : tail->questName);
}

void printQuest(Quest*& head, Quest*& tail)
{
  if (isEmpty(head))
  {
    std::cout << "Quest is empty\n";
  }
  else
  {
    Quest* temp_head = nullptr;
    Quest* temp_tail = nullptr;

    while (!isEmpty(head))
    {
      push(temp_head, temp_tail, top(head, tail), false);
      pop(head, tail, false);
    }

    Quest* print = temp_head;
    std::cout << "\nQuest List : \n";
    while (print)
    {
      std::cout << "-> " << print->questName << std::endl;
      print = print->next;
    }
    std::cout << std::endl;

    while (!isEmpty(temp_head))
    {
      push(head, tail, top(temp_head, temp_tail), false);
      pop(temp_head, temp_tail, false);
    }
  }
}


int main(int argc, char const *argv[])
{
  Quest* head = nullptr;
  Quest* tail = nullptr;

  push(head, tail, "Defeat the Dragon");
  push(head, tail, "Find hidden treasure");

  printQuest(head, tail);

  pop(head, tail);
  pop(head, tail);

  std::cout << "\nCalling pop after quest empty.\n";
  pop(head, tail);

  std::cout << "\nCalling push with quest string empty\n";
  push(head, tail);

  for (int i = 1; i <= 1000; i++)
  {
    push(head, tail, "Push up " + std::to_string(i) + "x");
  }
  
  return 0;
}
