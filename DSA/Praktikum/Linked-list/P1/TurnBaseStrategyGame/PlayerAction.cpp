#include <iostream>

struct Action
{
  Action *next;
  std::string actionName;
};

void addAction(Action*& head, std::string actionName)
{
  Action* newAction = new Action{nullptr, actionName};

  if (!head)
  {
    head = newAction;
    return;
  }

  Action* temp = head;
  while (temp->next)
  {
    temp = temp->next;
  }
  temp->next = newAction;
}

void undoAction(Action*& head)
{
  // return ketika list kosong
  if (head == nullptr)
  {
    return;
  }

  // hapus head ketika node sebelahnya kosong
  if (head->next == nullptr)
  {
    delete head;
    head = nullptr;
    return;
  }

  Action* temp = head;
  while (temp->next && temp->next->next != nullptr)
  {
    temp = temp->next;
  }

  delete temp->next;
  temp->next = nullptr;
  
}

void showAction(Action*& head)
{
  Action* temp = head;

  std::cout << "\nAction :";
  while (temp)
  {
    std::cout << " -> " << temp->actionName;
    temp = temp->next;
  }
  std::cout << std::endl;
  
}


int main(int argc, char const *argv[])
{
  Action* actionList = nullptr;

  addAction(actionList, "Move");
  addAction(actionList, "Attack");
  addAction(actionList, "Defend");

  showAction(actionList);

  std::cout << "\nMove Undo !!\n";
  undoAction(actionList);

  showAction(actionList);

  return 0;
}
