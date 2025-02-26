#include "lapres.h"
#include <iostream>

void LapresControl()
{
  int choice{0};
  
  std::cout << "List Lapres :\n";
  std::cout << "1. Lapres 2a\n";
  std::cout << "2. Lapres 2b\n";
  std::cout << "3. Lapres 2c\n";
  std::cout << "4. Lapres 2d\n";
  std::cout << "5. Lapres 2e\n";

  std::cout << "\nPilih lapres : "; std::cin >> choice;
  switch (choice)
  {
  case 1:
    lapres2a();
    break;
  case 2:
    lapres2b();
    break;
  case 3:
    lapres2c();
    break;
  case 4:
    lapres2d();
    break;
  case 5:
    lapres2e();
    break;
  
  default:
    std::cout << "invalid choice !!\n";
    break;
  }
}


void lapres2a(){
  
  int jawaban = 100;
  int hasil = jawaban - 10;

  std::cout << "Hasil = " << hasil + 6 << std::endl;


}

void lapres2b(){
  
  int value1 = 35;
  int value2 = 18;
  int sum = value1 + value2;

  std::cout << value1 << " + " << value2 << " = " << sum << std::endl;

}

void lapres2c(){
  
  int jumlah = 0;

  jumlah = 25 + 37 - 19;

  std::cout << "Berapa hasil perhitungan 25 + 37 - 19\n";
  std::cout << "Jawabannya adalah " << jumlah << std::endl;

}

void lapres2d(){
  int x, y;
  std::cout << "Masukan bilangan x : "; std::cin >> x;
  std::cout << "Masukan bilangan y : "; std::cin >> y;
  
  float avarage = (static_cast<float>(x) + static_cast<float>(y)) / 2;
  int sum = x + y;

  std::cout << "Jumlah x + y " << sum << std::endl;
  std::cout << "Avarage dua bilangan (x dan y) : " << avarage << std::endl;
  std::cout << "x^2 = " << x * x << std::endl;
  std::cout << "y^2 = " << y * y << std::endl;
   
}
void lapres2e(){
  float a, b, c;
  a = 3;
  b = 4.0;

  c = a * a + b * b;
  printf("c * c = %f", c);
}