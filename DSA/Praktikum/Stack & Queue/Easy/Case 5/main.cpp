#include <iostream>

struct Command
{
  std::string name;
  Command* next;
};

Command* createCommand(std::string commandName)
{
  Command* node = new Command();
  node->name = commandName;
  node->next = nullptr;
  return node;
}

bool isEmpty(Command*& head)
{
  return ((head == nullptr) ? true : false);
}

void push(Command*& head, Command*& tail, std::string commandName = "")
{
  if(commandName != "")
  {
    Command* newNode = createCommand(commandName);
    std::cout << "Push: " << commandName << std::endl;
    
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
    std::cout << "Command name doesn't valid.\n";
  }
}

void pop(Command*& head, Command*& tail)
{
  if (isEmpty(head))
  {
    std::cout << "Can't Undo, Command already empty.\n";
    return;
  }

  std::cout << "Undo Command / Action: " << tail->name << std::endl;

  if (head == tail)
  {
    delete tail;
    head = tail = nullptr;
    return;
  }
  
  Command* temp = head;
  
  while (temp->next != tail)
  {
    temp = temp->next;
  }
  
  delete tail;
  tail = temp;
  temp->next = nullptr;
}

void printStack(Command*& head)
{
  Command* current = head;
  std::cout << "\nCommand List : \n";
  while (current)
  {
    std::cout << "-> " << current->name << std::endl;
    current = current->next;
  }
  std::cout << "-> Null\n";
  
}

void top(Command*& head, Command*& tail)
{
  if (isEmpty(head))
  {
    std::cout << "\nCommand still empty, can't print top.\n";
  }
  else
  {
    std::cout << "\nTop Command: " << tail->name << std::endl;
  }
}


int main(int argc, char const *argv[])
{
  Command* h_command = nullptr;
  Command* t_command = nullptr;

  top(h_command, t_command);

  // printStack(h_command);
  std::cout << std::endl;

  push(h_command, t_command, "Move North");
  push(h_command, t_command, "Attack Monster");
  push(h_command, t_command, "Dogde Attack");

  std::cout << "\nCall push without command name\n";
  push(h_command, t_command);

  std::cout << std::endl;

  pop(h_command, t_command);
  pop(h_command, t_command);
  pop(h_command, t_command);
  pop(h_command, t_command);
  pop(h_command, t_command);

  for (int i = 0; i < 1000; i++)
  {
    push(h_command, t_command, "Punch 1000x time");
  }
  

  return 0;
}
