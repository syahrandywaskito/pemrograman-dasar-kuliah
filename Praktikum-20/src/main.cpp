#include <iostream>
#include <string>

void n1();
void n2(int n);

int main(int argc, char const *argv[])
{
  // n1();
  
  int n;
  std::cout << "n : "; std::cin >> n;
   
   n2(n);

  return 0;
}

void n1()
{
  int jumlah_mahasiswa = 0;
  int jumlah_nilai = 0;
  int nilai = 0;

  std::cout << "Jumlah mahasiswa : "; std::cin >> jumlah_mahasiswa;

  std::string nama_mahasiswa[jumlah_mahasiswa];
  int avarage[jumlah_mahasiswa];
  
  for (int i = 0; i < jumlah_mahasiswa; i++)
  {
    int total_nilai = 0;

    std::cout << "Nama mahasiswa : "; 
    std::cin >> nama_mahasiswa[i];
    std::cout << "Jumlah nilai : "; std::cin >> jumlah_nilai;
    
    for (int j = 0; j < jumlah_nilai; j++)
    {
      int list_temp = j + 1;
      std::cout << "Input nilai ke-" << list_temp << " : ";
      std::cin >> nilai;

      total_nilai += nilai;  
    }
    
    avarage[i] = total_nilai / jumlah_nilai;;
  }

  for (int i = 0; i < jumlah_mahasiswa; i++)
  {
    std::cout << "Rata-rata " << nama_mahasiswa[i];
    std::cout << " adalah " << avarage[i] << std::endl;
  }
  
}

void n2(int n)
{
  int list[6][7][7] = {0};

  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 7; j++)
    {
      if (j == 3)
      {
        list[i][j][3] = n;
      }
      
    }
    
  }

  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 7; j++)
    {
      for (int k = 0; k < 7; k++)
      {
        std::cout << list[i][j][k] << " ";
      }
      std::cout << std::endl;
    }
  }
  
  
}