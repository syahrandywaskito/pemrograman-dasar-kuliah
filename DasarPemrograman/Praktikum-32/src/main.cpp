#include <iostream>

struct barang
{
  std::string nama;
  int jumlah;
  int harga_satuan;
};


void jumlah_tertinggi(barang *arr_barang, int *jumlah_barang)
{
  int jumlah_max = arr_barang[0].jumlah;
  std::string nama_barang = arr_barang[0].nama;

  for (int i = 0; i < *jumlah_barang; i++)
  {
    if (jumlah_max < arr_barang[i].jumlah)
    {
      jumlah_max = arr_barang[i].jumlah;
      nama_barang = arr_barang[i].nama;
    } 
  }

  std::cout << "\nBarang dengan Jumlah terbesar:\n";
  std::cout << "=> " << nama_barang << std::endl;
  std::cout << "=> " << jumlah_max << " buah" << std::endl;
}

void harga_tertinggi(barang *arr_barang, int *jumlah_barang)
{
  int harga_max = arr_barang[0].harga_satuan;
  std::string nama_barang = arr_barang[0].nama;

  for (int i = 0; i < *jumlah_barang; i++)
  {
    if (harga_max < arr_barang[i].harga_satuan)
    {
      harga_max = arr_barang[i].harga_satuan;
      nama_barang = arr_barang[i].nama;
    } 
  }

  std::cout << "\nBarang dengan Rupiah terbesar:\n";
  std::cout << "=> " << nama_barang << std::endl;
  std::cout << "=> Rp. " << harga_max << std::endl;
}

void tampilkan_barang(barang *arr_barang, int *jumlah_barang)
{
  if (*jumlah_barang == 0)
  {
    std::cout << "Barang tidak ada, anda harus meng-input terlebih dahulu\n";
  }
  else
  {
    std::cout << "\n----Data Keseluruhan Barang----\n";
    for (int i = 0; i < *jumlah_barang; i++)
    {
      std::cout << "=> " << arr_barang[i].nama << " | ";
      std::cout << arr_barang[i].jumlah << " buah | ";
      std::cout << "Rp. "<< arr_barang[i].harga_satuan << " /satuan | \n";   
    }
  }

}

int main(int argc, char const *argv[])
{
  int n = 0;
  std::cout << "Jumlah barang : "; std::cin >> n;

  barang arr_barang[n];
  
  if (n != 0)
  {
    for (int i = 0; i < n; i++)
    {
      std::cout << "\n----Data Barang Ke-" << (i+1) << "----" << std::endl;
      std::cout << "Nama Barang : ";
      std::cin.ignore();
      std::getline(std::cin, arr_barang[i].nama);
      std::cout << "Jumlah Barang : "; std::cin >> arr_barang[i].jumlah;
      std::cout << "Harga Satuan barang : "; std::cin >> arr_barang[i].harga_satuan;
    }
  }

  tampilkan_barang(arr_barang, &n);
  jumlah_tertinggi(arr_barang, &n);
  harga_tertinggi(arr_barang, &n);

  return 0;
}
