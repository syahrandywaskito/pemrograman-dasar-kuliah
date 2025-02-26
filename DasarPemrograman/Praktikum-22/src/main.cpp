#include <iostream>
#include <stdio.h>

#define MAX 99

void n1();
void n2();
void n3();
void n4();
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
  char nip[MAX]; 
  char nama[MAX]; 
  char alamat[MAX];
  char telepon[MAX]; 
  char tanggal_lahir[MAX]; 
  char hobby[MAX]; 

  std::cout << "Input NIP : "; fgets(nip, sizeof(nip), stdin);
  std::cout << "Input Nama : "; fgets(nama, sizeof(nama), stdin);
  std::cout << "Input Alamat : "; fgets(alamat,sizeof(alamat), stdin);
  std::cout << "Input Telepon : "; fgets(telepon, sizeof(telepon), stdin);
  std::cout << "Input Tanggal Lahir : "; fgets(tanggal_lahir, sizeof(tanggal_lahir), stdin);
  std::cout << "Input Hobby : "; fgets(hobby, sizeof(hobby), stdin);

  
  std::cout << "\nNIP :" << nip;
  std::cout << "Nama :" << nama;
  std::cout << "Alamat :" << alamat;
  std::cout << "Telepon :" << telepon;
  std::cout << "Tanggal Lahir :" << tanggal_lahir;
  std::cout << "Hobby :" << hobby;
   
}

void n2()
{
  char nama[MAX];
  std::cout << "Input nama anda : "; gets(nama);
  std::cout << "\n\"Wahai " << nama << ", ketahuilah bahwasanya anda sedang belajar string\"";
}

void n3()
{
  char karakter[MAX];
  std::cout << "masukan kalimat : " << gets(karakter);

  std::cout << "\nKalimat yang diinput : " << karakter;
  
}

void n4()
{
    char huruf[100];
    int i = 0;

    std::cout << "Masukan Kata : "; fgets(huruf, sizeof(huruf), stdin);
    fflush(stdin);

    while (huruf[i] != '\0')
    {
        if (huruf[i] >= 'A' && huruf[i] <= 'Z' )
        {
            if (huruf[i] == 'Z')
            {
               huruf[i] == 'A';
            } else {
                huruf[i] = huruf[i] + 1;
            }
            
        }
        else if (huruf[i] >= 'a' && huruf[i] <= 'z')
        {
            if (huruf[i] == 'z')
            {
                huruf[i] == 'a';
            }
            else
            {
                huruf[i] = huruf[i] + 1;
            }   
            
        }
        
        i++;
        
        
    }
    std::cout << "Kata yang disandikan : " << huruf;

}

void n5()
{
  char kalimat[MAX];
  std::cout << "Input kalimat : "; gets(kalimat);

  int i = 0;
  int jumlah_huruf = 0;
  int jumlah_spasi = 0;

  while (kalimat[i] != '\0')
  {
    if (kalimat[i] == ' ')
    {
      jumlah_spasi++;
    }
    else
    {
      jumlah_huruf++;
    }
    
    i++;
  }
  
  std::cout << "Jumlah Huruf : " << jumlah_huruf << std::endl;
  std::cout << "Jumlah Spasi : " << jumlah_spasi << std::endl;
}