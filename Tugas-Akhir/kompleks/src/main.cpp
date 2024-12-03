#include <iostream>

struct Kompleks
{
  int real;
  int imajiner;
};


void penjumlahan(int* a, int* b, int* c, int* d, Kompleks* hasil);
void pengurangan(int* a, int* b, int* c, int* d, Kompleks* hasil);
void perkalian(int* a, int* b, int* c, int* d, Kompleks* hasil);

int main(int argc, char const *argv[])
{
  std::cout << "BILANGAN KOMPLEKS\n" ;
  std::cout << "<a+bi><opr><c+di>";

  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  Kompleks hasil;

  char answer = ' ';
  char opr = ' ';
  
  do
  {
    std::cout << std::endl << std::endl;
    std::cout << "a = "; std::cin >> a;
    std::cout << "b = "; std::cin >> b;
    std::cout << "c = "; std::cin >> c;
    std::cout << "d = "; std::cin >> d;
    std::cout << "masukan opr = "; std::cin >> opr;
    
    switch (opr)
    {
    case '+':
      penjumlahan(&a, &b, &c, &d, &hasil);
      break;
    case '-':
      pengurangan(&a, &b, &c, &d, &hasil);
      break;
    case '*':
      perkalian(&a, &b, &c, &d, &hasil);
      break;
    
    default:
      std::cout << "operator tidak ada !!\n";
      break;
    }
 
    if (hasil.real == 0 && hasil.imajiner == 0)
    {
      std::cout << "hasil : tidak ada / 0\n";
    }
    else if (hasil.real == 0)
    {
      std::cout << "hasil : " << hasil.imajiner << "i\n";
    }
    else if (hasil.imajiner == 0)
    {
      std::cout << "hasil : " << hasil.real << std::endl;
    }
    else
    {
      std::cout << "hasil : " << hasil.real << (hasil.imajiner < 0 ? "-" : "+") << (hasil.imajiner <= -1 ? hasil.imajiner * -1 : hasil.imajiner) << "i\n";
    }
    
    std::cout << "lagi ? (y/t) : "; std::cin >> answer;
  } while (answer != 't');
  

  return 0;
}

void penjumlahan(int* a, int* b, int* c, int* d, Kompleks* hasil)
{
  hasil->real = *a + *c;
  hasil->imajiner = *b + *d;
}

void pengurangan(int* a, int* b, int* c, int* d, Kompleks* hasil)
{
  hasil->real = *a - *c;
  hasil->imajiner = *b - *d;
}

void perkalian(int* a, int* b, int* c, int* d, Kompleks* hasil)
{
  hasil->real = (*a * *c) - (*b * *d);
  hasil->imajiner = (*b * *c) + (*a * *d);
}