#include <iostream>

struct Player
{
  std::string playerName;
  Player* next;
};

// membuat antrian untuk pemain yang menyelesaikan level duluan dan mendapatkan hadiah duluan

Player* createPlayer(std::string playerName)
{
  Player* newNode = new Player();
  newNode->playerName = playerName;
  newNode->next = nullptr;
  return newNode;
}

bool isEmpty(Player*& head)
{
  return ((head == nullptr) ? true : false);
}

void enqueue(Player*& head, Player*& tail, std::string playerName = "")
{
  if (playerName != "")
  {
    Player* newNode = createPlayer(playerName);
    /* code */
    std::cout << "Enqueue : " << playerName << std::endl;
  
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
    std::cout << "Invalid Player name\n";
  }
  
  
}

void dequeue(Player*& head)
{
  if (isEmpty(head))
  {
    std::cout << "Queue is empty.\n";
    return;
  }

  std::cout << "Processing player: " << head->playerName << std::endl;

  Player *temp = head;
  head = head->next;
  delete temp;
}

void front(Player*& head)
{
  if (isEmpty(head))
  {
    std::cout << "Queue is empty.\n";
  }
  else
  {
    std::cout << "Front : " << head->playerName << std::endl;
  }
  
}


int main(int argc, char const *argv[])
{
  // harus diisialisasi dengan nullptr agar tidak mengahasilkan nilai acak dan menyebabkan segmentation fault dan undefined behaviour
  Player* head = nullptr;
  Player* tail = nullptr;

  // menggunakan fungsi front dikala queue kosong
  // std::cout << std::endl;
  // front(head);

  // std::cout << std::endl;
  // enqueue(head, tail, "Player1");
  // enqueue(head, tail, "Player2");
  // enqueue(head, tail, "Player3");
  enqueue(head, tail);

  // std::cout << std::endl;
  // front(head);

  // std::cout << std::endl;
  // dequeue(head);
  // dequeue(head);
  // dequeue(head);

  // std::string indexPlayer = "";
  // for (int i = 1; i <= 1000; i++)
  // {
  //   indexPlayer = std::to_string(i);
  //   enqueue(head, tail, ("Player" + indexPlayer));
  // }

  // for (int i = 1; i <= 1000; i++)
  // {
  //   dequeue(head);
  // }
  
  
  // proses setelah di loop sebanyak 1000 kali

  // int lastIndex = 1000;
  // lastIndex++;
  // indexPlayer = std::to_string(lastIndex);
  // enqueue(head, tail, ("Player" + indexPlayer));

  return 0;
}
