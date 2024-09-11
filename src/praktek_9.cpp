#include <iostream>

void onetotwenty();
void triangular();
void kapital();
void reversKapital();
void ganjil();
void minGenap();
void faktorial();

int main(int argc, char const *argv[])
{
  
  // loop
  // onetotwenty();
  // triangular();
  // kapital();
  // reversKapital();
  // ganjil();
  // minGenap();
  faktorial();
  return 0;
}

void onetotwenty()
{
  for (int i = 1; i <= 20; i++)
  {
    std::cout << i << std::endl;
  }
  
}

void triangular()
{
  int result = 0;
  for (int i = 1; i <= 7; i++)
  {
    result += i;
  }
  std::cout << "Bilangan triangular : " << result << std::endl;
  
}

void kapital()
{
  char huruf = 'A';
  for (char i = huruf; i <= 'Z'; i++)
  {
    std::cout << i << std::endl;
  }
  
}

void reversKapital()
{
  char huruf = 'Z';
  for (char i = huruf; i >= 'A'; i--)
  {
    std::cout << i << std::endl;
  }
}

void ganjil()
{
  int n = 0;
  std::cout << "N : "; std::cin >> n;
  for (int i = 0; i <= n; i++)
  {
    if ((i % 2) != 0)
    {
      std::cout << i << ' ';
    }
    
  }
  
}

void minGenap()
{
  int n = 0;
  std::cout << "N : "; std::cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if ((i % 2) == 0)
    {
      std::cout << -i << ' '; 
    }
    else
    {
      std::cout << i << ' ';
    }
  }
  
} 

void faktorial()
{
  int n = 0, result = 1;
  std::cout << "n : "; std::cin >> n;
  for (int i = 1; i <= n; i++)
  {
    std::cout << i << '*';
    result *= i;
  }
  std::cout << " = " << result << std::endl;
}
