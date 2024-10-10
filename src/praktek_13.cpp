/**
 * P13 done
 * Pendahuluan
 */

#include <iostream>

void menu()
{
  std::cout << "Pilihan Menu" << std::endl;
}

void triangular(int n)
{
  int total;

  for (int i = 1; i <= n; i++)
  {
    total += i;  
  }

  std::cout << "nilai triangular dari " << n << " adalah " << total << std::endl;
  
}

float kuadrat(float n, float exp)
{
  float total = 1;
  for (int i = 1; i <= exp; i++)
  {
    total *= n;
  }

  return total;
  
}

int main(int argc, char const *argv[])
{

  int n;
  std::cout << "n : "; std::cin >> n;

  // for (int i = 1; i < n; i++)
  // {
  //   menu();
  // }
  
  // triangular(n);
  std::cout << "Nilai kuadrat dari " << n << " adalah " <<  kuadrat(static_cast<float>(n), 3.0f) << std::endl;

  return 0;
}

