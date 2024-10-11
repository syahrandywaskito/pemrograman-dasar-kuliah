#include <iostream>

float masukan(int jumlah_data);
float avarage(float total_nilai, float jumlah_nilai);

float f_to_i(float ukuran);
float i_to_cm(float ukuran);
float cm_to_m(float ukuran);

int main()
{
  int jumlah_data;
  std::cout << "Jumlah data : "; std::cin >> jumlah_data;
  
  float total_nilai = masukan(jumlah_data);

  std::cout << "Rata-rata dari " << total_nilai << " adalah " << avarage(total_nilai, static_cast<float>(jumlah_data)) << std::endl;

  float ukuran_f;
  std::cout << "Input ukuran feet : "; std::cin >> ukuran_f;
  
  float toInch = f_to_i(ukuran_f);
  std::cout << "feet to inchi : " << toInch << std::endl;

  float toCm = i_to_cm(toInch);
  std::cout << "inchi to cm : " << toCm << std::endl;

  float toMeter = cm_to_m(toCm);
  std::cout << "cm to meter : " << toMeter << std::endl;

  return 0;
}

float masukan(int jumlah_data)
{
  float total = 0.0f;
  float nilai = 0.0f;

  for (int i = 1; i <= jumlah_data; i++)
  {
    std::cout << "Masukan nilai ke-" << i << " : "; std::cin >> nilai;
    total += nilai;
  }

  return total;
  
}

float avarage(float total_nilai, float jumlah_nilai)
{
  return total_nilai / jumlah_nilai;
}

float f_to_i(float ukuran)
{
  return ukuran * 12.0f;
}

float i_to_cm(float ukuran)
{
  return ukuran * 2.54f;
}

float cm_to_m(float ukuran)
{
  return ukuran / 100;
}