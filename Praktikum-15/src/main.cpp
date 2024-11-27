#include <iostream>
#include <math.h>
#define PI 3.14159f

int lebihBesar(int a, int b)
{
  return (a > b ? a : b);
}

float permutasi(float n, float r)
{
  float faktor_n = 1.0f;
  float faktor_nr = 1.0f;

  for (float i = 1.0f; i <= n; i++)
  {
    faktor_n *= i;
  }
  
  for (float i = 1.0f; i <= (n - r); i++)
  {
    faktor_nr *= i;
  }

  return faktor_n / faktor_nr;  
  
}

float kombinasi(float n, float r)
{
  float faktor_n = 1.0f;
  float faktor_r = 1.0f;
  float faktor_nr = 1.0f;

  // n!
  for (float i = 1.0f; i <= n; i++)
  {
    faktor_n *= i;
  }
  
  // r!
  for (float i = 1.0f; i <= r; i++)
  {
    faktor_r *= i;
  }

  // (n-r)!
  for (float i = 1.0f; i <= (n-r); i++)
  {
    faktor_nr *= i;
  }
  
  return faktor_n / (faktor_r * faktor_nr);
  
}

void tambahDua(int &a, int &b){
  a += 2;
  b += 2;
}

float radian(float derajat)
{
  return (derajat / 180.0f * PI);
}

float sisiDepan(float derajat, float samping)
{
  return tan(radian(derajat)) * samping;
}

int main(int argc, char const *argv[])
{
  int a, b;
  std::cout << "Input bilangan 1 : "; std::cin >> a;
  std::cout << "Input bilangan 2 : "; std::cin >> b;
  std::cout << "Bilangan terbesar : " << lebihBesar(a, b) << std::endl;

  int n, r;
  std::cout << "n : "; std::cin >> n;
  std::cout << "r : "; std::cin >> r;
  std::cout << "Permutasi dari n r : " << permutasi(n, r) << std::endl;
  std::cout << "Kombinasi dari n r : " << kombinasi(n, r) << std::endl;   

  tambahDua(a, b);
  std::cout << "Setelah ditambah 2 : " << a << " dan " << b << std::endl;

  float derajat, samping;
  std::cout << "Input derajat : "; std::cin >> derajat;
  std::cout << "Input sisi samping "; std::cin >> samping;
  std::cout << "Sisi depan adalah " << sisiDepan(derajat, samping) << std::endl;
  
  return 0;
}
