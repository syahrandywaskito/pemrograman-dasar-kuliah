#include <iostream>
#include <stdio.h>

#define PI 3.14159f

void menu()
{
  std::cout << "Pilihan menu" << std::endl;
}

void triangular(int n)
{
  int total;
  for (int i = 1; i <= n; i++)
  {
    total += i;
    std::cout << i;
    if (i != n)
    {
      std::cout << " + ";
    }
    
  }
  std::cout << " | hasil : " << total << std::endl;
}

float kuadrat (float n)
{
  return n * n;
}

int ganjil(int n)
{
  if (n % 2 != 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

long faktorial(int n)
{
  long total = 1;
  for (int i = 1; i <= n; i++)
  {
    total *= i;
  }
  return total;
}

float radian(float derajat)
{
  return (derajat / 180.0f * PI);
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

int banding(int a, int b)
{
  return (a > b ? a : b);
}

float permutasi(float n, float r)
{
  float faktorial = 1.0f;
  
  for (float i = 1; i <= n; i++)
  {
    faktorial *= i;
  }
  
  return (faktorial / (n - r));
}

float kombinasi(float n, float r)
{
  float faktor_n = 1.0f;
  float faktor_r = 1.0f;
  float nr = n - r;
  float faktor_nr = 1.0f;

  // faktor n
  for (float i = 1; i <= n; i++)
  {
    faktor_n *= i;
  }

  for (float i = 1; i <= r; i++)
  {
    faktor_r *= i;
  }
  
  for (float i = 1; i <= nr; i++)
  {
    faktor_nr *= i;
  }

  return (faktor_n / (faktor_r * faktor_nr));  
  
}

OddEvenTest (int b)
{
  int a;

  a = b % 2;
  return a;
}


int main()
{
  // for (int i = 0; i < 10; i++)
  // {
  //   menu();
  // }

  // int n = 0;
  // std::cout << "n : "; std::cin >> n;

  // std::cout << "Deg to Rad : " << radian(static_cast<float>(n)) << std::endl;
  // triangular(n);
  // std::cout << "n : " << n << " = " << kuadrat(n) << std::endl;
  // std::cout << " n adalah ganjil :  " << ganjil(n) << std::endl;
  // std::cout << "faktorial : " << faktorial(n) << std::endl;
  
  // float suhu;
  // char asal, tujuan;
  // std::cout << "suhu : "; std::cin >> suhu;
  // std::cout << "suhu asal : "; std::cin >> asal;
  // std::cout << "suhu tujuan : "; std::cin >> tujuan;   
  
  // konversi(suhu, asal, tujuan);

  // int a, b;
  // std::cout << "a : "; std::cin >> a;
  // std::cout << "b : "; std::cin >> b;

  // std::cout << "Bilangan terbesar : "<< banding(a, b) << std::endl;  

  float n, r;
  std::cout << "n : "; std::cin >> n;
  std::cout << "r : "; std::cin >> r;

  std::cout << "permutasi : " << permutasi(n, r) << std::endl;
  std::cout << "kombinasi : " << kombinasi(n, r) << std::endl;

  // int a, hasil;

  // std::cout << "a : "; std::cin >> a;
  // hasil = OddEvenTest (a);
  // printf("a = %d; hasil = %d \n", a, hasil);


  return 0;
}
