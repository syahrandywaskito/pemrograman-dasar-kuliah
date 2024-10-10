#include <iostream>

int main(int argc, char const *argv[])
{
  char letters[10];

  std::cout << "char : "; std::cin >> letters[3];
  std::cout << "index 4 : " << letters[3] << std::endl;


  char ganjil[20] = "Hallo dunia fana";
  for (int i = 0; i < 20; i++)
  {
    if (i % 2 != 0)
    {
      std::cout << letters[i] << std::endl;
    }
    
  }

  char karakter[20] = "Hari yang cerah";
  char inputkar = ' ';

  std::cout << "Cari huruf : "; std::cin >> inputkar;
  for (int i = 0; i < 20; i++)
  {
    if (karakter[i] == inputkar)
    {
      std::cout << "ada dalam array";
      break;
    }
  }

  char nama[10];
  int jumlah_nilai = 0;
  std::cout << "Masukan jumlah nilai : "; std::cin >> jumlah_nilai;
  
  float nilai[jumlah_nilai];
  float total, avarage;
  for (int i = 0; i < jumlah_nilai; i++)
  { 
    std::cout << "Nilai ke-" << i << " = "; std::cin >> nilai[i];
    total += nilai[i];
    
  }
  
  avarage = total / jumlah_nilai;
  std::cout << "Rata-rata nilai : " << avarage << std::endl;
  

   
  return 0;
}
