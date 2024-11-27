#include <iostream>

void n1();
void n2();
void n3();
void n4();
void n5();

int main(int argc, char const *argv[])
{
  // n1();
  // n2();
  // n3();
  // n4();
  n5();

   
  return 0;
}

void n1()
{
  char letters[10];

  std::cout << "char : "; std::cin >> letters;
  std::cout << "index 4 : " << letters[3] << std::endl;
}

void n2()
{
  char ganjil[20];
  std::cout << "Inputkan kata : "; std::cin >> ganjil;

  for (int i = 0; i < 20; i++)
  {
    if ((i % 2) != 0)
    {
      std::cout << ganjil[i] << std::endl;
    }
    
  }
}

void n3()
{
  char karakter[20];
  char inputkar = ' ';

  std::cout << "Input text : "; std::cin >> karakter;
  std::cout << "Cari huruf : "; std::cin >> inputkar;
  for (int i = 0; i < 20; i++)
  {
    if (karakter[i] == inputkar)
    {
      std::cout << "ada dalam array";
      break;
    }
  }
}

void n4()
{
  char nama[10];
  int jumlah_nilai = 0;
  std::cout << "Masukan jumlah nilai : "; std::cin >> jumlah_nilai;
  
  float nilai[jumlah_nilai];
  float total, avarage;
  for (int i = 0; i < jumlah_nilai; i++)
  { 
    int list_temp = i + 1;
    std::cout << "Nilai ke-" << list_temp << " = "; std::cin >> nilai[i];
    total += nilai[i];
    
  }
  
  avarage = total / jumlah_nilai;
  std::cout << "Rata-rata nilai : " << avarage << std::endl;
}

void n5()
{
  char list[] = "sebuah array";
  char karakter;
  int len = sizeof(list) / sizeof(char);

  std::cout << "Input karakter : "; std::cin >> karakter;
  for (int i = 0; i < len; i++)
  {
    if (karakter == list[i])
    {
      std::cout << "karakter " << karakter << " ada dalam array";
    }
  }
  
}