#include <iostream>

struct Task
{
  std::string taskName;
  int timestamps;
  Task* next;
};

Task* createTask(std::string taskName, int timestamps)
{
  Task* node = new Task();
  node->next = nullptr;
  node->taskName = taskName;
  node->timestamps = timestamps;
  return node;
}

bool isEmpty(Task*& head)
{
  return ((head == nullptr) ? true : false);
}

void enqueue(Task*& head, Task*& tail, std::string taskName = "", int timestamps = 0)
{
  if (timestamps > -1 && (typeid(timestamps) != typeid(float)))
  {
    if (taskName != "")
    {
      Task* newNode = createTask(taskName, timestamps);
      std::cout << "Enqueue: " << taskName << " at time " << timestamps << std::endl;

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
      std::cout << "Task name not valid. Fill name properly.\n";
    }
  }
  else
  {
    std::cout << "Timestamps not valid. Timestamps must integer and non-negative value.\n";
  }
}

void dequeue(Task*& head)
{
  if (isEmpty(head))
  {
    std::cout << "Task already empty. Add more to process task\n";
    return;
  }
  std::cout << "Processing task: " << head->taskName << std::endl;

  Task* temp = head;
  head = head->next;
  delete temp;
  
}

std::string front(Task*& head)
{
  return (isEmpty(head) ? "Task still empty. Try add first" : head->taskName + " | " + std::to_string(head->timestamps));
}

void printQueue(Task*& head)
{
  if (isEmpty(head))
  {
    std::cout << "Can't Print, task queue is empty.\n";
    return;
  }

  Task* current = head;
  std::cout << "\nTask list: \n";
  while (current)
  {
    std::cout << "-> " << current->taskName << " | time: " << current->timestamps << std::endl;
    current = current->next;
  }
  std::cout << std::endl;
  
  
}

int main(int argc, char const *argv[])
{
  Task* head = nullptr;
  Task* tail = nullptr;

  int timeIndex = 0;

  enqueue(head, tail, "Build Barrack", timeIndex += 5);
  enqueue(head, tail, "Train Soldier", timeIndex += 5);
  enqueue(head, tail, "Research Technology", timeIndex += 5);

  std::cout << std::endl;

  dequeue(head);
  dequeue(head);
  dequeue(head);

  std::cout << "\nDequeue (processing) task yang sudah kosong\n";
  dequeue(head);

  int trainTime = 0;
  for (int i = 1; i <= 1000; i++)
  {
    enqueue(head, tail, "Train archer 1000x every 2s", trainTime += 2);
  }
  
  std::cout << "\nInput timestamp dengan nilai negatif\n";
  enqueue(head, tail, "Upgrade Cannon", -5);
  
  
  return 0;
}
