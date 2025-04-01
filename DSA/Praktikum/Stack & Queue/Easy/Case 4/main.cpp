#include <iostream>
#include <stdexcept>

struct Event
{
  std::string name = "";
  int timeStamp = 0;
  Event *next;
};

Event* createEvent(std::string eventName,int timeStamp)
{
  Event* node = new Event();
  node->name = eventName;
  node->timeStamp = timeStamp;
  node->next = nullptr;
  return node;
}

bool isEmpty(Event*& head)
{
  return ((head == nullptr) ? true : false);
}

void enqueue(Event*& head, Event*& tail, std::string eventName = "", int timeStamp = 0)
{
  if (eventName != "")
  {
    // std::cout << std::boolalpha;
    // std::cout << "is integer " << (typeid(timeStamp) != typeid(float)) << std::endl;

    if (timeStamp > 0 && (typeid(timeStamp) != typeid(float)))
    {
      Event* newNode = createEvent(eventName, timeStamp);
      std::cout << "Enqueue: " << eventName << " at time " << timeStamp << std::endl;
      
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
      std::cout << "TimeStamp doesn't valid\n";
    }
  }
  else
  {
    std::cout << "EventName doesn't valid\n";
  }
}

void dequeue(Event*& head)
{
  if (isEmpty(head))
  {
    std::cout << "Event queue is empty.\n";
    return;
  }
  
  std::cout << "Processing event: " << head->name << std::endl;

  Event* temp = head;
  head = head->next;
  delete temp;

}

void front(Event*& head)
{
  if (isEmpty(head))
  {
    std::cout << "\nEvent Queue still empty. Add more for peeking.\n";
  }
  else
  {
    std::cout << "\nEvent in front: " << head->name << std::endl;
  }
}

void printEventList(Event*& head)
{
  Event* current = head;
  std::cout << "\nEvent List :\n";
  while (current)
  {
    std::cout << "-> " << current->name << " | time: " << current->timeStamp << std::endl;
    current = current->next;
  }
  std::cout << "-> Null\n";
}

int main(int argc, char const *argv[])
{
  Event* h_event = nullptr;
  Event* t_event = nullptr;

  enqueue(h_event, t_event, "Spawn Enemy", 10);
  enqueue(h_event, t_event, "Trigger Cutscene", 20);
  enqueue(h_event, t_event, "Spawn Bonus", 30);

  printEventList(h_event);
  
  front(h_event);

  dequeue(h_event);
  dequeue(h_event);
  dequeue(h_event);
  dequeue(h_event);


  std::string eventArr[] = {
    "Spawn Projectile",
    "Spawn Trap",
    "Spawn Health Pack",
  };

  int lastTimeStamp = 30;
  for (int i = 0; i < 1000; i++)
  {
    enqueue(h_event, t_event, eventArr[rand() % 3], lastTimeStamp += 5);
  }
  
  std::cout << "\nAfter loop 1000x : \n";
  enqueue(h_event, t_event, "Clear Level", 5050);
  
  
  return 0;
}
