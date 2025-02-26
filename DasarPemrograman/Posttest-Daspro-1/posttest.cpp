#include <iostream>
#include <math.h>

void deadmatch();

void bintangKanan()
{
  int n;
  std::cout << "n : "; std::cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      std::cout << " * ";
    }
    std::cout << std::endl;
  }

}

void bintangkiri()
{
  int n ;
  std::cout << "n : "; std::cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = n; j > i; j--)
    {
      std::cout << ' ';
    }
    for (int k = 1; k <= i; k++)
    {
      std::cout << "*";
    }
    std::cout << std::endl;
    
  }
  
}

void segitiga()
{
  int n;
  std::cout << "n : "; std::cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = n; j > i; j--)
    {
      std::cout << ' ';
    }
    for (int k = 1; k <= (2 * i - 1); k++)
    {
      std::cout << "*";
    }
    std::cout << std::endl;
    
  }
   
}

void belahketupat()
{
  int n;
  std::cout << "n : "; std::cin >> n;
  
  for (int i = 1; i <= n; i++)
  {
    for (int j = n; j > i; j--)
    {
      std::cout << ' ';
    }
    for (int k = 1; k <= (2 * i - 1); k++)
    {
      std::cout << "*";
    }
    std::cout << std::endl;
    
  }
  for (int i = 2; i <= n; i++)
  {
    for (int j = 1; j < i; j++)
    {
      std::cout << ' ';
    }
    for (int k = n; k >= (2 * i - n); k--)
    {
      std::cout << "*";
    }
    std::cout << std::endl;
    
  }
   
}

void bintangBerongga()
{
  int n, j;
  std::cout << "n : "; std::cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (i == 1 || i == n)
    {
      for (j = 1; j <= n; j++)
      {
        std::cout << "*";
        
      }
    }
    else
    {
     for (int k = 1; k <= n; k++)
     {
      if (k == 1 || k == n)
      {
        std::cout << "*";
      }
      else
      {
        std::cout << " ";
      }
     }
     
    }
      
    std::cout << std::endl;
    }
    
}

void hexa()
{
  int biner = 0, desimal = 0, tempDes = 0, exponen = 0, tempHexa = 0;
  char hexa, karHexa;
  std::cout << "biner : "; std::cin >> biner;

  while (biner > 0)
  {
    
    desimal += (biner % 10) * pow(2, exponen);
    exponen++;
    biner /= 10;

  }
  
  tempDes = desimal;

  while (tempDes > 0)
  {
    tempHexa = (tempDes % 16);
    switch (tempHexa)
    {
    case 1:
      karHexa = '1';
      break;
    case 2:
      karHexa = '2';
      break;
    case 3:
      karHexa = '3';
      break;
    case 4:
      karHexa = '4';
      break;
    case 5:
      karHexa = '5';
      break;
    case 6:
      karHexa = '6';
      break;
    case 7:
      karHexa = '7';
      break;
    case 8:
      karHexa = '8';
      break;
    case 9:
      karHexa = '9';
      break;
    case 10:
      karHexa = 'A';
      break;
    case 11:
      karHexa = 'B';
      break;
    case 12:
      karHexa = 'C';
      break;
    case 13:
      karHexa = 'D';
      break;
    case 14:
      karHexa = 'E';
      break;
    case 15:
      karHexa = 'F';
      break;
    }
    tempDes /= 16;
    hexa = karHexa; 
  }
  std::cout << "Hexa : " << hexa << std::endl;
}


void suhu()
{
  std::cout << "Menu :\t 1. C to F\n";
  std::cout << "      \t 2. F to C\n";
  std::cout << "      \t 3. C to K\n";
  int pilihan = 0;
  std::cout << "Pilih konversi : "; std::cin >> pilihan; 
  float cel, kel, far, hasilf = 0.0, hasilc = 0.0, hasilk = 0.0;
  switch (pilihan)
  {
  case 1:
    std::cout << "C : "; std::cin >> cel;
    hasilf = (1.8 * cel) + 32.0f;
    std::cout << cel << " derajat celcius => " << hasilf << " Fahrenheit"; 
    break;
  case 2:
    std::cout << "F : "; std::cin >> far;
    hasilc = 0.55 * (far - 32.0f);
    std::cout << far << " derajat Fahrenheit => " << hasilc << " Celcius";
    break;
  case 3:
    std::cout << "C : "; std::cin >> cel;
    hasilk = cel + 273.15;
    std::cout << cel << " derajat Celscius => " << hasilk << " Kelvin"; 
    break;
  default:
    std::cout << "Pilihan tidak ada !!";
    break;
  }
}

int main(int argc, char const *argv[])
{

  // bintangKanan();
  // bintangkiri();
  // segitiga();
  // belahketupat();
  // bintangBerongga();
  // hexa();
  suhu();
  return 0; 
}

void deadmatch()
{
  int fx, gx, f, g;

  // std::cout << "F x : "; std::cin >> fx;
  // std::cout << "G X : "; std::cin >> gx;

  // rumus fx 
  f = 3 * (fx * fx * fx) - 2 * (fx * fx) + 5 * fx - 1;
  
  // rumus gx
  g = (gx * gx) + 4 * gx - 3;

  // std::cout << "f(x) + g(x) = " << f + g << std::endl;
  // std::cout << "f(x) - g(x) = " << f - g << std::endl;
  // std::cout << "f(x) * g(x) = " << f * g << std::endl;
}