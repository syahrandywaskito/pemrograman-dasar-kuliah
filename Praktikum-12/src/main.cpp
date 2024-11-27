#include <iostream>

void n1();
void n2();
void n3();
void n4();
void n5();
void lapres();

int main(int argc, char const *argv[])
{
  // n1();
  // n2();
  // n3();
  // n4();
  // n5();
  lapres();
  return 0;
}

void n1()
{
  int n = 0;
  std::cout << "n : "; std::cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      std::cout << j << ' '; 
    }
    std::cout << std::endl;
  }
   
}

void n2()
{
  int n = 0;
  std::cout << "n : "; std::cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      std::cout << i << ' ';
    }
    std::cout << std::endl;
  }
   
}

void n3()
{
  int n = 0;
  std::cout << "n : "; std::cin >> n;
  // loop untuk menampilkan deret
  for (int i = 2; i <= n; i++)
  {
    std::cout << i << " => ";
    bool prima = true;
    // loop untuk mengecek bilangan prima
    for (int j = 2; j < i; j++)
    {
      std::cout << i << " % " << j << " | ";
      if (i % j == 0)
      {
        prima = false;
      }
      
    }
    std::cout << std::endl;
    // if (prima)
    // {
    //   std::cout << i << ' ';
    // }
  }
  
  std::cout << std::endl;
}

void n4()
{
  int n = 0, deret = 0;
  std::cout << "n : "; std::cin >> n;
  for (int i = 0; i <= n; i++)
  {
    deret += i;
    std::cout << deret << ' ';
  }
  std::cout << std::endl;
}

void n5()
{
  char jawaban;
  do
  {
    // program 1
    int n1 = 0;
    std::cout << "n : "; std::cin >> n1;
    for (int i = 1; i <= n1; i++)
    {
      for (int j = 1; j <= n1; j++)
      {
        std::cout << j << ' '; 
      }
      std::cout << std::endl;
    }

    std::cout << std::endl;

    // program 2
    int n2 = 0;
    std::cout << "n : "; std::cin >> n2;
    for (int i = 1; i <= n2; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        std::cout << i << ' ';
      }
      std::cout << std::endl;
    }

    std::cout << std::endl;

    // program 3
    int n = 0;
    std::cout << "n : "; std::cin >> n;
    // loop untuk menampilkan deret
    for (int i = 2; i <= n; i++)
    {
      bool prima = true;
      
      // loop untuk mengecek bilangan prima
      for (int j = 2; j < i; j++)
      {
        if (i % j == 0)
        {
          prima = false;
        }
        
      }
      if (prima)
      {
        std::cout << i << ' ';
      }
    }
    
    std::cout << std::endl << std::endl;

    // program 4
    int n4 = 0, deret = 0;
    std::cout << "n : "; std::cin >> n4;
    for (int i = 0; i <= n4; i++)
    {
      deret += i;
      std::cout << deret << ' ';
    }

    std::cout << std::endl;

    std::cout << "apakah anda ingin keluar (y/t) ? "; std::cin >> jawaban;

  } while (jawaban != 'y');
  
}

void lapres()
{
  int n = 0;
  std::cout << "n : "; std::cin >> n;

  int hasil = 1;
  for (int i = 2; i <= n; i++)
  {
    std::cout << i << " => ";
    int temp = 0;
    for (int j = 0; j < i; j++)
    {
      std::cout << hasil << " | ";
      temp += hasil;
    }
    std::cout << std::endl;
    hasil = temp;
  }
  std::cout << "Bilangan : " << n << " = " << hasil << std::endl;
  
}