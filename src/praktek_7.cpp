#include <iostream>
#include <math.h>

void diskriminan();
void kalkulator();
void konversi();

int main()
{
  // diskriminan();
  // kalkulator();
  konversi();
  return 0;
}

void diskriminan()
{
  int a, b, c;
  
  std::cout << "Input nilai ke a, b, c :\n";
  std::cout << "a : "; std::cin >> a;
  std::cout << "b : "; std::cin >> b;
  std::cout << "c : "; std::cin >> c;

  int D = b*b + 4 * a * c;
  int x1, x2;
  
  if (D == 0)
  {
    std::cout << "Terdapat 2 akar real yang kembar\n";
    x1 = x2 = -b / 2*a;
  }
  else if(D > 0)
  {
    std::cout << "Terdapat 2 akar real yang berlainan\n";
    x1 = (-b + sqrt(D)) / 2*a;
    x2 = (-b - sqrt(D)) / 2*a;
  }
  else if(D < 0)
  {
    std::cout << "Terdapat 2 akar imajinair yang berlainan\n";
    x1 = -b / 2*a + (sqrt(-D) / 2*a);
    x2 = -b / 2*a - (sqrt(-D) / 2*a);
  }

  std::cout << "D = b^2 + 4ac : " << D << std::endl;
  std::cout << "akar dari x1 dan x2 : \n";
  std::cout << "x1 = " << sqrt(x1) << std::endl;
  std::cout << "x2 = " << sqrt(x2) << std::endl;
}

void kalkulator()
{
  int x, y;
  std::cout << "Masukkan bilangan pertama : "; std::cin >> x;
  std::cout << "Masukkan bilangan kedua : "; std::cin >> y; 

  std::cout << "Menu Matematika : \n";
  std::cout << "1. Penjumlahan\n";
  std::cout << "2. Pengurangan\n";
  std::cout << "3. Pembagian\n";
  std::cout << "4. Perkalian\n";

  int pilihan_user;
  float hasil;

  std::cout << "Masukan pilihan anda : "; std::cin >> pilihan_user;
  
  if (pilihan_user == 1)
  {
    hasil = x + y;  
  }
  else if (pilihan_user == 2)
  {
    hasil = x - y;
  }
  else if (pilihan_user == 3)
  {
    hasil = static_cast<float>(x) / static_cast<float>(y);
  }
  else if (pilihan_user == 4)
  {
    hasil = x * y;
  }

  std::cout << "Hasil operasi tersebut : " << hasil << std::endl;
  

}

void konversi()
{
  int angka = 0;
  char huruf = ' ';
  
  std::cout << "Masukan nilai angka : "; std::cin >> angka;

  if (angka <= 40)
  {
    huruf = 'E';
  }
  else if((angka > 40) && (angka <= 55))
  {
    huruf = 'D';
  }
  else if((angka > 55) && (angka <= 60))
  {
    huruf = 'C';
  } 
  else if((angka > 60) && (angka <= 80))
  {
    huruf = 'B';
  }
  else if((angka > 80) && (angka <= 100))
  {
    huruf = 'A';
  }

  std::cout << "Nilai huruf adalah " << huruf << std::endl; 
}