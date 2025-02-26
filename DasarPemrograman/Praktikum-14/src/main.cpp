#include <iostream>

#define PI 3.14159f

int ganjil(int n)
{
  return (n % 2) != 0 ? 1 : 0;
}

long faktorial(int n)
{
  int total = 1;
  for (int i = 1; i <= n; i++)
  {
    total *= i;
  }
  
  return total;

}

int prima(int n)
{
  if (n == 1 || n == 0)
  {
    return 0;
  }

  // mengecek apakah bilangan n prima atau tidak melalui loop
  // loop berjalan dengan mengecek n modulo dengan i
  for (int i = 2; i <= n / 2; i++)
  {
    // jika habis maka bukan prima
    if ((n % i) == 0)
    {
      return 0;
    }
    
  }

  // jika return selesai dan modul != 1 maka prima
  return 1;
  
}

void konversi(int suhu, char asal, char tujuan)
{

  float hasil;

  if (asal == 'C')
  {
    switch (tujuan)
    {
    case 'F':
      hasil = (1.8 * suhu) + 32.0f;
      std::cout << suhu << " C => " << hasil << " F" << std::endl;     
      break;
    case 'R':
      hasil = 0.8 * suhu;
      std::cout << suhu << " C => " << hasil << " R" << std::endl;
      break;
    case 'K':
      hasil = suhu + 273.15;
      std::cout << suhu << " C => " << hasil << " K" << std::endl;
      break;
    }
  }

  else if (asal == 'R')
  {
    switch (tujuan)
    {
    case 'C':
      hasil = 1.25f * suhu;
      std::cout << suhu << " R => " << hasil << " C" << std::endl;
      break;
    case 'F':
      hasil = (2.25f * suhu) + 32.0f;
      std::cout << suhu << " R => " << hasil << " F" << std::endl;
      break;
    case 'K':
      hasil = (1.25f * suhu) + 273.15f;
      std::cout << suhu << " R => " << hasil << " K" << std::endl;
      break;
    }
  }
  
  else if (asal == 'F')
  {
    switch (tujuan)
    {
    case 'C':
      hasil = 0.55f * (suhu - 32.0f);
      std::cout << suhu << " F => " << hasil << " C" << std::endl;
      break;
    case 'R':
      hasil = 0.44f * (suhu - 32.0f);
      std::cout << suhu << " F => " << hasil << " R" << std::endl;
      break;
    case 'K':
      hasil = 0.55f * (suhu - 32.0f) + 273.15f;
      std::cout << suhu << " F => " << hasil << " K" << std::endl;
      break;
    }
  }
  else if(asal == 'K')
  {
    switch (tujuan)
    {
    case 'C':
      hasil = suhu - 273.15f;
      std::cout << suhu << " K => " << hasil << " C" << std::endl;
      break;
    case 'R':
      hasil = 0.8f * (suhu - 273.15f);
      std::cout << suhu << " K => " << hasil << " R" << std::endl;
      break;
    case 'F':
      hasil = 1.8f * (suhu - 273.15f) + 32.0f;
      std::cout << suhu << " K => " << hasil << " F" << std::endl;
      break;
    }
  }
}

float radian(float derajat)
{
  return (derajat / 180.0f * PI);
}

int main(int argc, char const *argv[])
{
  // int n;
  // std::cout << "n : "; std::cin >> n;

  // std::cout << "Apakah n ganjil : " << ganjil(n) << std::endl; 
  // std::cout << "Faktorial dari n : " << faktorial(n) << std::endl;
  // std::cout << "Apakah n adalah bilangan prima : " << prima(n) << std::endl; 

  // float derajat = 0;
  // std::cout << "Input derajat : "; std::cin >> derajat;
  // std::cout << "Derajat ke Radian : " << radian(derajat) << std::endl;

  float suhu = 0.0f; 
  char asal, tujuan;
  std::cout << "Input suhu : "; std::cin >> suhu;
  std::cout << "Input asal suhu : "; std::cin >> asal;
  std::cout << "Input tujuan suhu : "; std::cin >> tujuan;
  konversi(suhu, asal, tujuan); 
  return 0;
}
