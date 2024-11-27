#include <iostream>

const int MAX = 3;

int main(int argc, char const *argv[])
{
  int kolom, baris, a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];

  std::cout << "\n====Perkalian Matriks Ordo Sama====\n";


  // Input ordo dan elemen mattriks A
  std::cout << "Input Matriks A !" << std::endl;
  std::cout << "Baris matriks A : "; std::cin >> baris;
  std::cout << "Kolom matriks A : "; std::cin >> kolom;
  
  for (int i = 0; i < baris; i++)
  {
    for (int j = 0; j < kolom; j++)
    {
      std::cout << "Matriks A baris " << i << " kolom " << j << " : ";
      std::cin >> a[i][j];
    }
    
  }
  
  std::cout << "Matriks A :" << std::endl;
  for (int i = 0; i < baris; i++)
  {
    for (int j = 0; j < kolom; j++)
    {
      std::cout << a[i][j] << '\t';
    }
    std::cout << std::endl;
  }
  
  // input matriks B
  std::cout << "Input Matriks B !" << std::endl;
  std::cout << "Baris matriks B : "; std::cin >> baris;
  std::cout << "Kolom matriks B : "; std::cin >> kolom;
  
  for (int i = 0; i < baris; i++)
  {
    for (int j = 0; j < kolom; j++)
    {
      std::cout << "Matriks B baris " << i << " kolom " << j << " : ";
      std::cin >> b[i][j];
    }
    
  }
  
  std::cout << "Matriks B :" << std::endl;
  for (int i = 0; i < baris; i++)
  {
    for (int j = 0; j < kolom; j++)
    {
      std::cout << b[i][j] << '\t';
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;

  // perkalian matriks
  if (baris == kolom)
  {
    for (int i = 0; i < baris; i++)
    {
      for (int j = 0; j < kolom; j++)
      {
        int hasil = 0;

        for (int k = 0; k < baris; k++)
        {
          std::cout << "C K-" << k << " = " << a[i][k] << " * " << b[k][j] << std::endl;
          hasil += a[i][k] * b[k][j];
        }
        std::cout << std::endl;
        
        c[i][j] = hasil;
      }
      
    }

    std::cout << "\n====Hasil Perkalian Matriks====\n";
    for (int i = 0; i < baris; i++)
    {
      for (int j = 0; j < kolom; j++)
      {
        std::cout << c[i][j] << '\t';
      }
      
      std::cout << std::endl;
    }
    
    
  }
  else
  {
    std::cout << "Baris dengan kolom tidak sama !!" << std::endl;
  }

  

  return 0;
}
