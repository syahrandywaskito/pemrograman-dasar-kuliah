#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>

void segitiga();

int main(int argc, char const *argv[])
{

  int desimal = 0, total = 0, biner = 1001;
  // std::cout << "Biner : "; std::cin >> biner;
  int i = 0;

  // std::cout << biner.size() << std::endl;

  while (biner > 0)
  {
    desimal += (biner % 10) * pow(2, i);
    i++;
    biner = biner / 10;
    
  }
  std::cout << desimal << std::endl;
  
  
  return 0;


}

void segitiga()
{
  int n = 10;
  // baris
  for (int i = 1; i <= n ; i++)
  {
    // kolom
    for (int j = 1; j <= i; j--)
    {
      std::cout << j << ' ';
    }
    std::cout << std::endl;
    
  }
  
}




