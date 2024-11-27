#include "percobaan.h"
#include "lapres.h"
#include <iostream>
#include <stdio.h>

int main()
{
  int choice{0};

  std::cout << "Pilih Lapres / Percobaan :\n";
  std::cout << "1. Percobaan\n";
  std::cout << "2. Lapres\n";
  
  std::cout << "\nPilih salah satu : "; std::cin >> choice;

  switch (choice)
  {
  case 1:
    PercobaanControl();
    break;
  case 2:
    LapresControl();
    break;
  
  default:
    std::cout << "Invalid Choice !!!\n";
    break;
  }

 return 0;

}



