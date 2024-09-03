#include <iostream>

void ganjilGenap();
void diskon();
void prima();
void prima2();
void division();

int main()
{
  // ganjilGenap();
  std::cout << std::endl;
  // diskon();
  std::cout << std::endl;
  // prima();
  // prima2();
  std::cout << std::endl;
  division();

  return 0;
}

void ganjilGenap()
{
  // penentuan ganjil genap
  int bilangan = 15;
  std::cout << "Sebuah bilangan : " << bilangan << std::endl;

  if ((bilangan % 2) == 0)
  {
    std::cout << "Bilangan " << bilangan << " adalah genap\n"; 
  }
  else
  {
    std::cout << "Bilangan " << bilangan << " adalah ganjil\n"; 
  } 
}

void diskon()
{
  // diskon 
  int diskon, total_belanja;
  std::cout << "Masukan Total Belanja pembelian : "; std::cin >> total_belanja;
  
  if (total_belanja < 100000)
  {
    std::cout << "Total Belanja anda : " << total_belanja << std::endl;
    std::cout << "Anda tidak mendapat diskon!\n";
  }
  else if (total_belanja >= 100000)
  {
    diskon = total_belanja * 0.05;
    total_belanja -= diskon;
    std::cout << "Anda mendapat diskon 5% : " << diskon << " maka total pembelian menjadi :" << total_belanja << std::endl;
  }
  
}

void prima()
{
  int n;
  bool bilangan_prima = true;

  std::cout << "Masukan satu bilangan : "; std::cin >> n;
  if (n == 0 || n == 1)
  {
    bilangan_prima = false;
  }
  else
  {
    for (int i = 2; i <= n / 2; i++) // menggunakan / 2 untuk membatasi iterasi
    {
      // std::cout << n << " % " << i << " = " << n % i << std::endl;
      if ((n % i) == 0)
      {
        // setelah modulo == 0 maka loop akan break
        bilangan_prima = false;
        break; 
      }
      
    }
  }

  if (bilangan_prima)
  {
    std::cout << "bilangan : " << n << " adalah bilangan prima\n"; 
  }
  else
  {
    std::cout << "bilangan : " << n << " bukan bilangan prima\n"; 
  }  
  
}

void prima2()
{
  int bilangan = 0;
  std::cout << "Masukan bilanagan : "; std::cin >> bilangan;

  int x = bilangan % 1;
  int y = bilangan % bilangan;

  if ((x == 0) && (y == 0))
  {
    std::cout << "Bilangan prima\n";
  }
  else 
  {
    std::cout << "Bukan bilangan prima\n";
  }
   
}

void division()
{
  float x, y;
  std::cout << "x = "; std::cin >> x;
  std::cout << "y = "; std::cin >> y;

  if ((x != 0) && (y != 0))
  {
    std::cout << x << " / " << y << " = " << x / y << std::endl;
  }
  else
  {
    std::cout << "Division by Zero";
  }
   

}