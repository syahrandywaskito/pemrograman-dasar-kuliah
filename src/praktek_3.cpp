#include <iostream>
#include <stdio.h>

void lapres2a();
void lapres2b();
void lapres2c();
void lapres2d();
void lapres2e();

int main()
{
  lapres2a();
  lapres2b();
  lapres2c();
  lapres2d();
  lapres2e();

  /*
  std::cout << "\n1. ";
  std::cout << "Hello World !\n";
  
  std::cout << "\n2. ";
  std::cout << "Hello...\n..oh my\n...when do i stop\n";

  std::cout << "\n3. ";
  std::cout << "1024 + 4096 = " << 1024 + 4096 << std::endl;

  int x{}, y{};
  std::cout << "\n4. Input bilangan : \n";
  std::cout << "Masukan bilangan x : "; std::cin >> x; 
  std::cout << "Masukan bilangan y : "; std::cin >> y;
  std::cout << "x + y : " << x+y << std::endl;  

  float z{};
  std::cout << "\n5. Input Float : \n";
  std::cout << "Input z sebagai float : "; std::cin >> z;
  std::cout << "z * 50 : " << static_cast<float>(z * 50) << std::endl;
  
  float pecahan{18.90f};
  std::cout << "\n6. ";
  std::cout << "Tampilkan bilangan pecahan tanpa format : " << pecahan << std::endl;

  float format{14.5000};
  printf("\n7. Pecahan dengan format 10.2 : %10.2f", format);  

  int number{};
  char huruf{};
  std::cout << "\n\n8. Tampilkan int dan char :\n";
  std::cout << "Masukan nilai variabel int : "; std::cin >> number;
  std::cout << "Masukan nilai variabel char : "; std::cin >> huruf;
  std::cout << "Bilangan int : " << number << std::endl; 
  std::cout << "Bilangan char : " << huruf << std::endl; 
  */

 return 0;

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