#include <iostream>
#include <string.h>
#include <string>

const int MAX = 99;

void n1();
void n2();
void n3();
void n4();
void hexa();

int main(int argc, char const *argv[])
{
  
  // n1();
  // n2();
  // n3();
  n4();

  return 0;
}

void n1()
{
  char nama[MAX];
  char kelas[MAX];
  char gabungan[MAX]; 

  std::cout << "Masukan nama anda : "; gets(nama);
  std::cout << "Masukan kelas anda : "; gets(kelas);

  strcpy(gabungan, strcat(nama, kelas));
  std::cout << "Setelah digabung : " << gabungan << std::endl;

}

void n2()
{
  char kata1[MAX];
  char kata2[MAX];
  int compare;

  std::cout << "Masukan kata pertama : "; gets(kata1);
  std::cout << "Masukan kata kedua : "; gets(kata2);

  compare = strcmp(kata1, kata2);
  if (compare == -1)
  {
    std::cout << "Kata 1 kurang dari kata 2\n";
  }
  else if (compare == 0)
  {
    std::cout << "Kata 1 sama dengan kata 2\n";
  }
  else if (compare == 1)
  {
    std::cout << "Kata 1 lebih dari kata 2\n";
  }

}

void n3()
{
  char kata[MAX];
  char karakter;
  char *hasil;

  std::cout << "Masukan sebuah kata : "; gets(kata);
  std::cout << "Masukan karakter yang : "; std::cin >> karakter;

  hasil = strchr(kata, karakter);
  std::cout << "hasil pencarian dari karakter : " << karakter << " = " << hasil << std::endl;
}

void n4()
{
  std::string hexResult;
  const char hexList[] = "0123456789ABCDEF";
  int decimal = 0;
  
  std::cout << "Masukan nilai decimal : "; std::cin >> decimal; 

  while (decimal > 0)
  {
    int remainder = decimal % 16;
    std::cout << std::endl;
    std::cout << remainder << std::endl;
    std::cout << hexResult << std::endl;
    std::cout << hexList[remainder] << std::endl;
    hexResult = hexList[remainder] + hexResult;
    decimal /= 16;
  }
  
  std::cout << "Hasil konversi ke hexadecimal : " << hexResult << std::endl;
  
}



