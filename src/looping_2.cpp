#include <iostream>
#include <string>

void nomor1()
{
  char karakter;
  while (true)
  {
    std::cin >> karakter;
    if (karakter == '\n')
    {
      break;
    }
    else
    {
      std::cout << karakter << std::endl;
    }
    
  }
  
}

void nomor2()
{
  int n;
  std::cout << "n : "; std::cin >> n;
  
  for (int i = 1; i < n; i++)
  {
    if ((i % 3) == 0 )
    {
      continue;
    }
    else if ((i % 2) != 0)
    {
      std::cout << i << ' ';
    }
  }
}

void nomor3()
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
  
void nomor4()
{
  int n, nilai, min = 1, max = 1, total; 
  std::cout << "Input jumlah nilai : "; std::cin >> n;
  for (int i = 1; i <= n; i++)
  {
    std::cout << "Nilai ke-" << i << " : "; std::cin >> nilai;
    
    // kondisi untuk setup nilai pertama kali dimasukkan sebelum 
    // di compare dengan yang lain
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
  std::cout << "Avarage : " << total / n << std::endl;
  std::cout << "Min : " << min << std::endl;
  std::cout << "Max : " << max << std::endl;
  
}

void nomor5()
{
  int n;
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

void nomor6()
{
  int n;
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

void nomor7()
{
  int n;

  std::cout << "n : "; std::cin >> n;

  // Loop untuk menampilkan deret
  for (int i = 2; i <= n; i++)
  {
    bool bilangan_prima = true;
    
    // loop untuk mencari bilangan prima
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        bilangan_prima = false;
        break;
      }
      
    }

    // jika bilangan prima, maka ditampilkan ke deret
    if (bilangan_prima)
    {
      std::cout << i << ' ';    
    }
     
  }
}

void nomor8()
{
  int bilangan = 0, n = 0;
  std::cout << "n : "; std::cin >> n; 
  for (int i = 0; i < n; i++)
  {
    bilangan += i;
    std::cout << bilangan << ' ';
  }
  
}

void nomor9()
{
  char jawaban;
  do
  {
    int n7;

    std::cout << "n : "; std::cin >> n7;

    // Loop untuk menampilkan deret
    for (int i = 2; i <= n7; i++)
    {
      bool bilangan_prima = true;
      
      // loop untuk mencari bilangan prima
      for (int j = 2; j < i; j++)
      {
        if (i % j == 0)
        {
          bilangan_prima = false;
          break;
        }
        
      }

      // jika bilangan prima, maka ditampilkan ke deret
      if (bilangan_prima)
      {
        std::cout << i << ' ';    
      }
      
    }

    std::cout << std::endl;
    
    int bilangan = 0, n8 = 0;
    std::cout << "n : "; std::cin >> n8; 
    for (int i = 0; i < n8; i++)
    {
      bilangan += i;
      std::cout << bilangan << ' ';
    }

    std::cout << std::endl;
    std::cout << "Apakah ingin keluar program (y/t) : "; std::cin >> jawaban;
  } while (jawaban != 'y');
  
}

int main()
{
  // nomor1();
  // nomor2();
  // nomor3();
  // nomor4();
  // nomor5();
  // nomor6();
  // nomor7();
  // nomor8();
  nomor9();

  return 0;
}

