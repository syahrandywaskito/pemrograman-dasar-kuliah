#include <iostream>
#define MAX 5

void tambah(int A[MAX][MAX], int B[MAX][MAX], int nA, int mA, int nB, int mB);
void kurang(int A[MAX][MAX], int B[MAX][MAX], int nA, int mA, int nB, int mB);
void kali(int A[MAX][MAX], int B[MAX][MAX], int nA, int mA, int nB, int mB);

int main(int argc, char const *argv[])
{
  std::cout << "Operasi Matriks" << std::endl; 
  std::cout << std::endl;

  // untuk ordo baris matriks A
  int nA = 0;
  // untuk ordo kolom matriks A
  int mA = 0;

  std::cout << "Define Ordo pada matriks A !!" << std::endl; 
  std::cout << "Masukan ordo baris : "; std::cin >> nA;
  std::cout << "Masukan ordo kolom : "; std::cin >> mA;
  int A[nA][mA], jumlah = 0;

  std::cout << std::endl;

  // untuk ordo baris matriks B
  int nB = 0;
  // untuk ordo baris matriks B
  int mB = 0;

  std::cout << "Define ordo pada matriks B !!" << std::endl;
  std::cout << "Masukan ordo baris : "; std::cin >> nB;
  std::cout << "Masukan ordo kolom : "; std::cin >> mB;
  int B[nB][mB];

  std::cout << std::endl;
  // Input Matriks A
  std::cout << "Input element Matriks A !!" << std::endl;
  for (int i = 0; i < nA; i++)
  {
    for (int j = 0; j < mA; j++)
    {
      std::cout << "A [" << i << "][" << j << "] : ";
      std::cin >> A[i][j];
    }
    
  }

  std::cout << std::endl;
  // Input Matriks B
  std::cout << "Input element Matriks B !!" << std::endl;
  for (int i = 0; i < nB ; i++)
  {
    for (int j = 0; j < mB; j++)
    {
      std::cout << "B [" << i << "][" << j << "] : ";
      std::cin >> B[i][j];
    }
    
  }
  

  std::cout << std::endl;

  // menampilkan array matriks
  std::cout << "Matriks A : " << std::endl; 
  for (int i = 0; i < nA; i++)
  {
    for (int j = 0; j < mA; j++)
    {
      std::cout << A[i][j] << " ";
    }
    std::cout << std::endl;
    
  }

  std::cout << std::endl;
  std::cout << "Matriks B : " << std::endl;
  for (int i = 0; i < nB; i++)
  {
    for (int j = 0; j < mB; j++)
    {
      std::cout << B[i][j] << " ";
    }
    std::cout << std::endl;
  }

  // pengecekan ordo mA dengan nA

  int hasil[3][3];
  if (mA != nA)
  {
    std::cout << "Berbeda ordo, matriks tidak bisa dikali" << std::endl;
  }
  else
  {
    for (int i = 0; i < nA; i++)
    {
      for (int j = 0; i < nB; j++)
      {
        jumlah = 0;
        for (int k = 0; i < mB; k++)
        {
          jumlah += A[i][k] * B[k][i];
        }
        hasil[i][j] = jumlah;
      }
      
    }
    
    std::cout << "\n == Hasil Kali Matriks == \n";
    for (int i = 0; i < nA; i++)
    {
      for (int j = 0; j < mB; j++)
      {
        std::cout << hasil[i][j] << '\t';
      }
      std::cout << std::endl;    
    }
  }

  
  
  
  // int pilihan_operasi = 0;
  // std::cout << "Pilih Operasi matriks !!" << std::endl;
  // std::cout << "1. Penjumlahan " << std::endl;
  // std::cout << "2. Pengurangan " << std::endl;
  // std::cout << "3. Perkalian " << std::endl;

  // switch (pilihan_operasi)
  // {
  // case 1:
  //   tambah(A, B, nA, mA, nB, mB);
  //   break;
  // case 2:
  //   kurang(A, B, nA, mA, nB, mB);
  //   break;
  // case 3:
  //   kali(A, B, nA, mA, nB, mB);
  //   break;
  // default:
  //   std::cout << "Pilihan tidak valid !!" << std::endl;
  //   break;
  // }  


  return 0;
}

void tambah(int A[MAX][MAX], int B[MAX][MAX], int nA, int mA, int nB, int mB)
{
  int C[nA][nB];

  if ((nA != nB) && (mA != mA))
  {
    std::cout << "Error : Ordo antar kedua array tidak sama !!";
  }
  else
  {
    for (int i = 0; i < nA; i++)
    {
      for (int j = 0; j < mA; i++)
      {
        C[i][j] = A[i][j] + B[i][j];
        std::cout << C[i][j] << " ";
      }
      std::cout << std::endl;
    }
  }

}

void kurang(int A[MAX][MAX], int B[MAX][MAX], int nA, int mA, int nB, int mB)
{
}

void kali(int A[MAX][MAX], int B[MAX][MAX], int nA, int mA, int nB, int mB)
{

}