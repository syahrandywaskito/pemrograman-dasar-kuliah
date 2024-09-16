#include <iostream>
#include <string>

void n1();
void n2();
void n3();
void n4();
void lapres();

int main()
{
  
  // n1();
  // n2();
  // n3();
  // n4();
  lapres();

  return 0;
}

void n1()
{
  std::string karakter;
  std::cout << "masukan karakter : "; std::getline(std::cin, karakter);
  int i = 0;
  while (karakter[i] != '\0')
  {
    std::cout << karakter[i] << std::endl;
    i++;

    if (karakter[i] == ' ')
    {
      break;
    }
  }
  
}

void n2()
{
  int n = 0;
  std::cout << "n : "; std::cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if ((i % 3) == 0)
    {
      continue;
    }
    else if ((i % 2) != 0)
    {
      std::cout << i << ' ';
    }
    
  }
  
  std::cout << std::endl;
}

void n3()
{
  int n;
  std::cout << "n : "; std::cin >> n;  
  for (int i = i; i < n; i++)
  {
    if ((i % 7) == 0 || (i % 11) == 0)
    {
      continue;
    }
    else if (i == 100)
    {
      break;
    }
    else if (i % 2 != 0)
    {
      std::cout << i << ' ';
    }
    
  }
}

void n4()
{
  int n, nilai, min = 1, max = 1, total; 
  std::cout << "Input jumlah nilai : "; std::cin >> n;
  for (int i = 1; i <= n; i++)
  {
    std::cout << "Nilai ke-" << i << " : "; std::cin >> nilai;
    
    if (i == 1)
    {
      min = nilai;
      max = nilai;
    }
    else if (min > nilai)
    {
      min = nilai;
    }
    else if (max < nilai)
    {
      max = nilai;
    }
    total += nilai;
  }
  float avarage = static_cast<float>(total) / static_cast<float>(n);
  std::cout << "Avarage : " << avarage << std::endl;
  std::cout << "Min : " << min << std::endl;
  std::cout << "Max : " << max << std::endl;
}

void lapres()
{
  int bilangan;
  std::cout << "Masukan bilangan : "; std::cin >> bilangan;
  int i = 0, angka, total = 0;
  std::cout << bilangan;
  while (bilangan > 0)
  {
    angka = bilangan % 10;
    total += angka;
    bilangan /= 10;
  }
  std::cout << " = " << total;
  
}
