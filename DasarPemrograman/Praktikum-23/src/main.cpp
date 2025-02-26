#include <iostream>
#include <math.h>

const int MAX = 99;

// fungsi utility
int len(char str[MAX])
{
  int i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  
  return i;
}

void n1();

// nomor 2
void n2();
void balik(char asal[MAX], char tujuan[MAX], int n);
void ubah(char asal[MAX], char tujuan[MAX], int n);
void tampil(char nama[MAX]);

// nomor 3
void n3();
void palindrom(char asal[MAX], char tujuan[MAX], int n);

// nomor 4
void n4();

// nomor 5
void n5();


int main(int argc, char const *argv[])
{
  // n1();
  // n2();
  // n3();
  // n4();
  n5();

  return 0;
}

void n1()
{
  char nama[MAX];

  std::cout << "Masukan nama anda : "; gets(nama);

  int jumlah_huruf = 0;
  int i = 0;

  while (nama[i] != '\0')
  {
    if (nama[i] != ' ')
    {
      jumlah_huruf++;
    }
    i++;
  }
  
  
  std::cout << "Wahai " << nama << " ketahuilah bahwa panjang nama Anda " << jumlah_huruf <<  " Huruf\n";
}


void n2()
{
  char nama[MAX];
  char hasil[MAX];
  std::cout << "Masukan nama anda : "; gets(nama);
  
  ubah(nama, hasil, len(nama));
  balik(nama, hasil, len(nama));
   
}

void tampil(char nama[MAX])
{
  std::cout << nama << std::endl;
}

void ubah(char asal[MAX], char tujuan[MAX], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (asal[i] >= 'a' && asal[i] <= 'z')
    {
      tujuan[i] = asal[i] - 32;
    }
    else
    {
      tujuan[i] = asal[i];
    }
  }
  tujuan[n] = '\0';
  
  tampil(tujuan);
}

void balik(char asal[MAX], char tujuan[MAX], int n)
{
  int j = 0;
  for (int i = n - 1; i >= 0; i--)
  {
    tujuan[j] = asal[i];
    j++;
  }
  tujuan[n] = '\0';

  tampil(tujuan);
}

// nomor 3
void n3()
{
  char kalimat[MAX];
  char pembanding[MAX];
  
  std::cout << "Masukan kalimat : "; gets(kalimat);

  palindrom(kalimat, pembanding, len(kalimat));

}

void palindrom(char asal[MAX], char tujuan[MAX], int n)
{
  int j = 0;
  bool isPalindrom = true;
  
  // logic balik kata
  for (int i = n-1; i >= 0; i--)
  {
    tujuan[j] = asal[i];
    j++;
  }

  tujuan[n] = '\0';

  //logic palindrom
  for (int i = 0; i < n; i++)
  {
    if (asal[i] == tujuan[i])
    {
      continue;
    }
    else
    {
      isPalindrom = false;
      break;
    }
  }

  if(isPalindrom)
  {
    std::cout << "KATA PALINDROM \n";
  }
  else
  {
    std::cout << "BUKAN KATA PALINDROM \n";
  }
  
}

void n4()
{
  char kalimat[MAX];
  char sandi[MAX];
  std::cout << "Masukan kalimat : "; gets(kalimat);

  int n = len(kalimat);
  
  for (int i = 0; i < n; i++)
  {
    if (kalimat[i] == ' ')
    {
      continue;
    }
    else if (kalimat[i] == 'Z' || kalimat[i] == 'Y' || kalimat[i] == 'z' || kalimat[i] == 'y')
    {
      sandi[i] = kalimat[i] - 24;
    }
    else
    {
      sandi[i] = kalimat[i] + 2;
    }
    
  }
  sandi[n] = '\0';

  std::cout << "Sandi : " << sandi << std::endl;
  
}

void n5(){
    int bin, dec, pangkat = 0, temp;

    std::cout << "Masukan biner : "; std::cin >> bin;

    while(bin>0){

        temp = bin % 10;
        dec += temp * pow(2,pangkat);

        pangkat++;
        bin /= 10;
    }

    std::cout << "Hasil biner ke decimal : " << dec << std::endl;
}