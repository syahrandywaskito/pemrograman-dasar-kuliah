#include "percobaan.h"
#include <iostream>

void PercobaanControl()
{
  int choice{0};
  
  std::cout << "List Percobaan :\n";
  std::cout << "1. Percobaan 1\n";
  std::cout << "2. Percobaan 2\n";
  std::cout << "3. Percobaan 3\n";
  std::cout << "4. Percobaan 4\n";
  std::cout << "5. Percobaan 5\n";
  std::cout << "6. Percobaan 6\n";
  std::cout << "7. Percobaan 7\n";
  std::cout << "8. Percobaan 8\n";
  std::cout << "9. Percobaan 9\n";
  

  std::cout << "\nPilih Percobaan : "; std::cin >> choice;
  switch (choice)
  {
  case 1:
    percobaan1();
    break;
  case 2:
    percobaan2();
    break;
  case 3:
    percobaan3();
    break;
  case 4:
    percobaan4();
    break;
  case 5:
    percobaan5();
    break;
  case 6:
    percobaan6();
    break;
  case 7:
    percobaan7();
    break;
  case 8:
    percobaan8();
    break;

  default:
    std::cout << "invalid choice !!\n";
    break;
  }
}

void percobaan1()
{
  std::cout << "\n1. ";
  std::cout << "Hello World !\n";
}

void percobaan2()
{
  std::cout << "\n2. ";
  std::cout << "Hello...\n..oh my\n...when do i stop\n";
}

void percobaan3()
{
  std::cout << "\n3. ";
  std::cout << "1024 + 4096 = " << 1024 + 4096 << std::endl;
}

void percobaan4()
{
  int x{}, y{};
  std::cout << "\n4. Input bilangan : \n";
  std::cout << "Masukan bilangan x : "; std::cin >> x; 
  std::cout << "Masukan bilangan y : "; std::cin >> y;
  std::cout << "x + y : " << x+y << std::endl;
}

void percobaan5()
{
  float z{};
  std::cout << "\n5. Input Float : \n";
  std::cout << "Input z sebagai float : "; std::cin >> z;
  std::cout << "z * 50 : " << static_cast<float>(z * 50) << std::endl;
}

void percobaan6()
{
  float pecahan{18.90f};
  std::cout << "\n6. ";
  std::cout << "Tampilkan bilangan pecahan tanpa format : " << pecahan << std::endl;
}

void percobaan7()
{
  float format{14.5000};
  printf("\n7. Pecahan dengan format 10.2 : %10.2f", format);  
}

void percobaan8()
{
  int number{};
  char huruf{};
  std::cout << "\n\n8. Tampilkan int dan char :\n";
  std::cout << "Masukan nilai variabel int : "; std::cin >> number;
  std::cout << "Masukan nilai variabel char : "; std::cin >> huruf;
  std::cout << "Bilangan int : " << number << std::endl; 
  std::cout << "Bilangan char : " << huruf << std::endl; 
}