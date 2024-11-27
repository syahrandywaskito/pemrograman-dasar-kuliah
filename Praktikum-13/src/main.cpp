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
  int total = 0;

  for (int i = 1; i <= n; i++)
  {
    total += i;  
  }

  std::cout << "nilai triangular dari " << n << " adalah " << total << std::endl;
  
}

int kuadrat(int n)
{
  return n * n; 
}

int main(int argc, char const *argv[])
{

  int n;
  std::cout << "n : "; std::cin >> n;

  // triangular(n);
  // for (int i = 1; i < 5; i++)
  // {
  //   menu();
  // }
  
  std::cout << "Nilai kuadrat dari " << n << " adalah " <<  kuadrat(n) << std::endl;

  return 0;
}

