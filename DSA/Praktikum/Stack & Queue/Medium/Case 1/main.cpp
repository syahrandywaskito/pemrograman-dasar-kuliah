#include <iostream>

struct Action
{
  std::string actionName;
  Action* next;
};

Action* createAction(std::string actionName)
{
  Action* node = new Action();
  node->actionName = actionName;
  node->next = nullptr;
  return node;
}

bool isEmpty(Action*& head)
{
  return ((head == nullptr) ? true : false);
}

void push(Action*& head, Action*& tail, std::string actionName = "", bool msg = true)
{
  if (actionName != "")
  {
    Action* newNode = createAction(actionName);

    if (msg)
    {
      std::cout << "Push: " << actionName << std::endl;
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
    return;
  }
  else
  {
    std::cout << "Action name not valid.\n";
    return;
  }
}


void pop(Action*& head, Action*& tail, bool msg = true)
{
  if (isEmpty(head))
  {
    std::cout << "Stack already empty. No action can undo\n";
    return;
  }

  if (head == tail)
  {
    std::cout << "Undo action: " << tail->actionName << std::endl;

    delete tail;
    head = tail = nullptr;
    return;
  }

  if (msg)
  {
    std::cout << "Undo action: " << tail->actionName << std::endl;
  }

  Action* current = head;
  while (current->next != tail)
  {
    current = current->next;
  }
  

  // menghapus tail sekarang kemudian memasukkan node sebelum tail ke tail, otomatis tail akan berubah, kemudian set next ke nullptr agar tidak terisi dengan value aneh yang bisa merusak linked list
  delete tail;
  tail = current;
  current->next = nullptr;
  
}

std::string top(Action*& head, Action*& tail)
{
  return (!isEmpty(head) ? tail->actionName : "Empty.");
}

void printStack(Action*& head, Action*& tail)
{
  if (isEmpty(head))
  {
    std::cout << "Action stack still empty.\n";
    return;
  }
  else
  {
    Action* temp_head = nullptr;
    Action* temp_tail = nullptr;

    // loop untuk mengurutkan dari top ke bottom
    while (!isEmpty(head))
    {
      push(temp_head, temp_tail, top(head, tail), false);
      pop(head, tail, false);
    }

    Action* current = temp_head;

    std::cout << "\nAction : \n";
    // loop untuk menampilkan urutan action sesuai dengan temp
    while (current)
    {
      std::cout << "-> " << current->actionName << std::endl;
      current = current->next;
    }
    std::cout << '\n';
    
    // loop untuk mengurutkan kembali ke sedia kala
    while (!isEmpty(temp_head))
    {
      push(head, tail, top(temp_head, temp_tail), false);
      pop(temp_head, temp_tail, false);
    }
    
  }
}


int main(int argc, char const *argv[])
{
  Action* head = nullptr;
  Action* tail = nullptr;

  push(head, tail, "Take Weapon");
  push(head, tail, "Attack Enemy");  
  push(head, tail, "Parry Enemy");
  push(head, tail, "Counter Attack Enemy");

  std::cout << std::endl;

  pop(head, tail);
  pop(head, tail);
  pop(head, tail);
  pop(head, tail);
  pop(head, tail);

  // for (int i = 1; i <= 1000; i++)
  // {
  //   push(head, tail, "Spinning " + std::to_string(i) + "x");
  // }

  std::cout << "\nPush action dengan name = null\n";
  push(head, tail);
  

  
  return 0;
}
