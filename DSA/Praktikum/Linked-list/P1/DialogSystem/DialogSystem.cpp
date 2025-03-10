#include <iostream>

struct Dialog
{
  Dialog* next;
  int dialogID;
  std::string name;
  std::string text;
  bool skipped;
}; 

void addDialog(Dialog*& head, int id, std::string name, std::string text)
{
  Dialog* newDialog = new Dialog{nullptr, id, name, text, false};
  
  if (!head)
  {
    head = newDialog;
    return;
  }

  Dialog* temp = head;
  while (temp->next)
  {
    temp = temp->next;
  }

  temp->next = newDialog;
  
}

void removeDialog(Dialog*& head)
{
  if (head == nullptr)
  {
    head = nullptr;
    return;
  }

  Dialog* temp = head;
  
  head = head->next;

  delete temp;
  
}

void skipDialog(Dialog*& head, int id)
{
  Dialog* temp = head;
  while (temp)
  {
     if (temp->dialogID == id)
     {
        // std::cout << "Dialog : " << temp->text << " skipped\n";
        temp->skipped = true;
        return;
     }
     temp = temp->next;
  }
}

void showDialog(Dialog*& head)
{
  Dialog* temp = head;
  std::cout << "\nDialog : \n-----------\n";
  while (temp)
  {
    if (temp->skipped != true)
    {
      std::cout << temp->name << " : " << temp->text << std::endl;
    }
    temp = temp->next;
  }
  std::cout << "-----------------\n";
  
}

void previousDialog(Dialog*& head, int id)
{
  Dialog* temp = head;

  // menemukan dialog sesuai dengan id
  while (temp)
  {
    if (temp->dialogID == id)
    {
      // std::cout << "Dialog dengan id " << temp->dialogID << " ditemukan !!\n";
      break;
    }
    else
    {
      temp = temp->next;
    }
  }

  // print dialog
  std::cout << "\nDialog: \n-----------\n";
  while (temp)
  {
    if (temp->skipped != true)
    {
      std::cout << temp->name << " : " << temp->text << std::endl;
    }
    temp = temp->next;
  }
  std::cout << "-----------------\n";
  
}


int main(int argc, char const *argv[])
{

  Dialog* dialogList = nullptr;

  addDialog(dialogList, 1, "NPC", "Hallo Adventurer");
  addDialog(dialogList, 2, "NPC", "You must find a sword to defeat the dragon");
  addDialog(dialogList, 3, "NPC", "I Will give you Map");
  addDialog(dialogList, 4, "Player", "Thank you Sir");
  addDialog(dialogList, 5, "NPC", "One more thing Adventurer !");
  addDialog(dialogList, 6, "Player", "Whats that ?");
  addDialog(dialogList, 7, "NPC", "Sword have cursed if you using it more than 1 hour");
  addDialog(dialogList, 8, "NPC", "Using the sword wisely");
  addDialog(dialogList, 9, "Player", "Thank you sir, i will keep your advice");
  addDialog(dialogList, 10, "NPC", "Your welcome adventurer, good luck");


  showDialog(dialogList);

  skipDialog(dialogList, 2);
  removeDialog(dialogList);

  showDialog(dialogList);

  std::cout << "\nPrint Previous Dialog\n";

  previousDialog(dialogList, 5);

  return 0;
}
