#include <iostream>
#include <string>

void n1();
void n2();
void n3();
void n4();

int main()
{
  // n1();
  // n2();
  // n3();
  n4();
  return 0;
}

void n1()
{
  char karakter;
  while (karakter != 'X')
  {
    std::cin >> karakter;
    std::cout << karakter << std::endl;
  }
  
}

void n2()
{
  int i = 0, bilangan = 0; 
  char jawaban;
  while (jawaban != 't')
  {
    i++;
    std::cout << "Masukan bilangan ke-" << i << " : ";
    std::cin >> bilangan;
    std::cout << "Mau memasukkan data lagi [y/t] ? ";
    std::cin >> jawaban;
  }
  std::cout << "Total bilangan : " << i << std::endl;
  
}

void n3()
{
  int i = 0, bilangan = 0, total = 0, min = 1, max = 1; 
  char jawaban;
  while (jawaban != 't')
  {
    i++;
    std::cout << "Masukan bilangan ke-" << i << " : ";
    std::cin >> bilangan;
    std::cout << "Mau memasukkan data lagi [y/t] ? ";
    std::cin >> jawaban;

    if (i == 1)
    {
      min = bilangan;
      max = bilangan;
      std::cout << min << ' ' << max;
    }
    else if (min > bilangan)
    {
      min = bilangan;
    }
    else if (max < bilangan)
    {
      max = bilangan;
    }
    total += bilangan;
  }
  float avarage = static_cast<float>(total) / static_cast<float>(i);
  std::cout << "Total bilangan : " << i << std::endl;
  std::cout << "Rata - rata : " << avarage << std::endl;
  std::cout << "min : " << min << std::endl;
  std::cout << "max : " << max << std::endl; 
}

void n4()
{
  std::string kalimat;
  std::cout << "Masukan sebuah kalimat : "; std::getline(std::cin, kalimat);

  int spasi = 0, kata = 0, total, i = 0;

  while (kalimat[i] != '\0')
  {
    if (kalimat[i] != ' ')
    {
      kata++;
    }
    else
    {
      spasi++;
    }
    i++;
  }
  total = spasi + kata;
  std::cout << "jumlah spasi : " << spasi << std::endl;
  std::cout << "jumlah kata : " << kata << std::endl;
  std::cout << "jumlah keseluruhan : " << total << std::endl; 
  
}