#include <iostream>

void matriks()
{
  //
}

int main()
{
  char letters[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      std::cout << "input : "; std::cin >> letters[i][j]; 
    }
    
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      std::cout << letters[i][j];
    }
    std::cout << std::endl;
  }
  
  
}