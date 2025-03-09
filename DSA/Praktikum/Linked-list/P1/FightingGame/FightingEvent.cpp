#include <iostream>

struct Move
{
  Move *next;
  std::string moveName;
};

// menambahkan move
void addMove(Move*& head, std::string moveName)
{
  Move* newMove = new Move{nullptr, moveName};

  if (!head)
  {
    head = newMove;
    return;
  }

  Move* temp = head;
  while (temp->next)
  {
    temp = temp->next;
  }
  temp->next = newMove;
  
}

Move* executeMove(Move*& head)
{
  if (head == nullptr)
  {
    return nullptr;
  }

  Move *temp = head;

  head = head->next;

  delete temp;

  return head;
  
}

void showMove(Move*& head)
{
  Move* temp = head;

  std::cout << "Move :"; 
  while (temp)
  {
    std::cout << " -> " << temp->moveName;
    temp = temp->next;
  }

  std::cout << std::endl;
  
}

int main(int argc, char const *argv[])
{
  Move *moveList = nullptr;

  addMove(moveList, "Kick");
  addMove(moveList, "Punch");

  showMove(moveList);

  std::cout << "\nMove Executed !!\n";
  moveList = executeMove(moveList);

  showMove(moveList);

  std::cout << "\nAdded Move !!\n";
  addMove(moveList, "Uppercut");
  addMove(moveList, "Dogde");

  showMove(moveList);

  std::cout << "\nMove Executed !!\n";
  moveList = executeMove(moveList);
  
  showMove(moveList);

  return 0;
}
