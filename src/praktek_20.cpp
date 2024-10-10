#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
  int jumlah_mahasiswa = 0;
  int jumlah_nilai = 0;
  int count = 0;
  

  std::cout << "Jumlah mahasiswa : "; std::cin >> jumlah_mahasiswa;

  // memuat array nama mahasiswa;
  std::string nama[jumlah_mahasiswa];

  // memuat array rata-rata sesuai dengan index nama;
  float avarages[jumlah_mahasiswa];

  float total = 0.0f;
  // mencari perulangan mahasiswa
  do
  {
    // input nama kepada array nama sesuai dengan index count
    
    int list = 0;
    std::cout << "Nama mahasiswa " << " : "; std::cin >> nama[count];

    // input jumlah nilai untuk digunakan sebagai loop dan jumlah pada array dimensi kedua di array nilai[]
    std::cout << "Jumlah nilai = "; std::cin >> jumlah_nilai;

    // deklarasi array nilai dengan baris sebesar jumlah_mahasiswa, dan kolom sebesar jumlah nilai yang diinputkan sebelumnya
    float nilai[jumlah_mahasiswa][jumlah_nilai];

    // loop untuk memasukkan nilai kedalam array kemudian ditambahkan
    // untuk dicari rata-rata
    for (int i = 0; i < jumlah_nilai; i++)
    {
      std::cout << "Input nilai ke-" << i << " = "; std::cin >> nilai[count][i];
      total += nilai[count][i];
      
    }
    avarages[jumlah_mahasiswa] = total / static_cast<float>(jumlah_nilai);

    count++;
  } while (count > 0);
  
  for (int i = 0; i < jumlah_mahasiswa; i++)
  {
    std::cout << "Nilai rata-rata : " << nama[i] << " adalah " << avarages[i]; 
  }

  return 0;
}
