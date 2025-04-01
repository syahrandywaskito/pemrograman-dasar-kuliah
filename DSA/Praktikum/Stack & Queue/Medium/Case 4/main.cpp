#include <iostream>

struct Log
{
  Log* next;
  std::string logName;
};

Log* createLog(std::string logName)
{
  Log* node = new Log();
  node->next = nullptr;
  node->logName = logName;

  return node;
}

bool isEmpty(Log*& head)
{
  return ((head == nullptr) ? true : false); 
}

void enqueue(Log*& head, Log*& tail, std::string logName = "")
{
  if (logName != "")
  {
    Log* newNode = createLog(logName);
    std::cout << "Enqueue: " << logName << std::endl;
    
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
    std::cout << "Invalid action data\n";
  }
}

void dequeue(Log*& head)
{
  if (isEmpty(head))
  {
    std::cout << "Log is empty.\n";
  }
  else
  {
    std::cout << "Processing: " << head->logName << std::endl;

    Log* temp = head;
    head = head->next;
    delete temp;
  }
}

std::string front(Log*& head)
{
  return ((isEmpty(head) ? "Log is empty. " : head->logName));
}

void printLog(Log*& head)
{
  if (isEmpty(head))
  {
    std::cout << "Log is empty\n";
    return;
  }

  Log* current = head;
  std::cout << "\nLog : \n";
  while (current)
  {
    std::cout << "-> " << current->logName << std::endl;
    current = current->next;
  }
  std::cout << std::endl;

}


int main(int argc, char const *argv[])
{
  Log* head = nullptr;
  Log* tail = nullptr;

  enqueue(head, tail, "Move left");
  enqueue(head, tail, "Attack Monster");
  enqueue(head, tail, "Pick Up Health Potion");
  enqueue(head, tail, "Move Backward");

  printLog(head);

  dequeue(head);
  dequeue(head);
  dequeue(head);
  dequeue(head);
  dequeue(head);

  std::cout << "\nEnqueue without string log / action\n";
  enqueue(head, tail);
  std::cout << "\n\n";

  for (int i = 1; i <= 1000; i++)
  {
    enqueue(head, tail, "Action" + std::to_string(i));
  }
  
  enqueue(head, tail, "After Loop");
  
  return 0;
}
