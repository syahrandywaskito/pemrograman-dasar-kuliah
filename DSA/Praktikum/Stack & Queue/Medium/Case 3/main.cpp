#include <iostream>

struct Movement
{
  Movement* next;
  std::string name;
};

Movement* createMovement(std::string movementName)
{
  Movement* node = new Movement();
  node->next = nullptr;
  node->name = movementName;
  return node; 
}

bool isEmpty(Movement*& head)
{
  return ((head == nullptr) ? true : false);
}

void push(Movement*& head, Movement*& tail, std::string movementName = "", bool msg = true)
{
  if (movementName != "")
  {
    Movement* newNode = createMovement(movementName);

    if (msg)
    {
      std::cout << "Push: " << movementName << std::endl;
    }
    

    if(isEmpty(head))
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
    std::cout << "Name not valid, try fill the name properly.";
  }
  
}

void pop(Movement*& head, Movement*& tail, bool msg = true)
{
  if (isEmpty(head))
  {
    std::cout << "Can't rewind, Movement already empty.";
    return;
  }

  if (head == tail)
  {
    if (msg)
    {
      std::cout << "Rewind: " << tail->name << std::endl;
    }
    delete tail;
    head = tail = nullptr;
    return;
  }

  if (msg)
  {
    std::cout << "Rewind: " << tail->name << std::endl;
  }
  
  
  Movement* temp = head;
  while (temp->next != tail)
  {
    temp = temp->next;
  }

  delete tail;
  tail = temp;
  temp->next = nullptr;
  
}

std::string top(Movement*& head, Movement*& tail)
{
  return (isEmpty(head) ? "Movement still empty." : tail->name);
}

void printMovement(Movement*& head, Movement*& tail)
{
  if (isEmpty(head))
  {
    std::cout << "Can't print, Movement still empty\n";
  }
  else
  {
    Movement* temp_head = nullptr;
    Movement* temp_tail = nullptr;
  
    while (!isEmpty(head))
    {
      push(temp_head, temp_tail, top(head, tail), false);
      pop(head, tail, false);
    }
  
    Movement* print = temp_head;
    std::cout << "\nMovement list : \n"; 
    while (print)
    {
      std::cout << "-> " << print->name << std::endl;
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
  Movement* head = nullptr;
  Movement* tail = nullptr;

  push(head, tail, "Move Up");
  push(head, tail, "Move Right");
  push(head, tail, "Move Down");
  
  std::cout << "\nTop Movement : " << top(head, tail) << std::endl;

  std::cout << "\nprint movement stack";
  printMovement(head, tail);
  
  pop(head, tail);
  pop(head, tail);
  pop(head, tail);

  std::cout << "\nPop if stack empty\n";
  pop(head, tail);
  std::cout << "\n\n";

  std::cout << "Push if movement name is empty.\n";
  push(head, tail);

  for (int i = 1; i <= 1000; i++)
  {
    push(head, tail, "Counter & Parry : " + std::to_string(i) + "x");
  }

  return 0;
}
