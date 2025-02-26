#include <iostream>
#include <string>

struct data
{
  std::string namaMhs;
  int nilaiTugas;
  int nilaiUTS;
  int nilaiUAS;
  int nilaiAkhir;
};

void n1();
int nilai_akhir(int nilai_tugas, int nilai_uts, int nilai_uas);
void nilai_mhs(int nilai_tugas, int nilai_uts, int nilai_uas);
void nilai_uas_tertinggi(data *arr_mhs, int jumlah_mhs);
void nilai_akhir_tertinggi(data *arr_mhs, int jumlah_mhs);
std::string rentang_nilai(int nilai_akhir);

int main(int argc, char const *argv[])
{
  n1();
  return 0;
}

void nilai_uas_tertinggi(data *arr_mhs, int jumlah_mhs)
{
  int uas_tertinggi;
  std::string nama_mhs;

  int temp_nilai = arr_mhs[0].nilaiUAS;
  std::string temp_nama = arr_mhs[0].namaMhs;

  for (int i = 0; i < jumlah_mhs; i++)
  {
    if (temp_nilai < arr_mhs[i].nilaiUAS)
    {
      temp_nilai = arr_mhs[i].nilaiUAS;
      temp_nama = arr_mhs[i].namaMhs;
    } 
  }

  nama_mhs = temp_nama;
  uas_tertinggi = temp_nilai;

  std::cout << "\nMahasiswa dengan nilai UAS tertinggi :\n";
  std::cout << "=> " << nama_mhs << std::endl;
  std::cout << "=> " << uas_tertinggi << std::endl;
  
}

void nilai_akhir_tertinggi(data *arr_mhs, int jumlah_mhs)
{
  int temp_nilai = arr_mhs[0].nilaiAkhir;
  std::string temp_nama = arr_mhs[0].namaMhs;

  for (int i = 0; i < jumlah_mhs; i++)
  {
    if (temp_nilai < arr_mhs[i].nilaiAkhir)
    {
      temp_nilai = arr_mhs[i].nilaiAkhir;
      temp_nama = arr_mhs[i].namaMhs;
    } 
  }

  std::cout << "\nMahasiswa dengan nilai Ahir tertinggi :\n";
  std::cout << "=> " << temp_nama << std::endl;
  std::cout << "=> " << temp_nilai << std::endl;
}


void nilai_mhs(int nilai_tugas, int nilai_uts, int nilai_uas)
{
  std::string keterangan_1 = "nilai kosong";

  // verifikasi nilai tugas
  if (nilai_tugas == -1)
  {
    std::cout << "\tNilai tugas : " <<  keterangan_1 << std::endl;
  }
  else
  {
    std::cout << "\tNilai tugas : " << nilai_tugas << std::endl;  
  }

  // verifikasi nilai UTS
  if (nilai_uts == -1)
  {
    std::cout << "\tNilai UTS : " <<  keterangan_1 << std::endl;
  }
  else
  {
    std::cout << "\tNilai UTS : " << nilai_uts << std::endl;  
  }

  // verifikasi nilai UAS
  if (nilai_uts == -1)
  {
    std::cout << "\tNilai UAS : " <<  keterangan_1 << std::endl;
  }
  else
  {
    std::cout << "\tNilai UAS : " << nilai_uas << std::endl;  
  }

  if(nilai_tugas == -1 && nilai_uts == -1 && nilai_uas == -1)
  {
    std::cout << "\tSEMUA NILAI KOSONG !!!";
  }
  
  
}

int nilai_akhir(int nilai_tugas, int nilai_uts, int nilai_uas)
{
  return ((nilai_tugas * 20) / 100) + ((nilai_uts * 40) / 100) + ((nilai_uas * 40) / 100);
}

std::string rentang_nilai(int nilai_akhir)
{
  if (nilai_akhir >= 86 && nilai_akhir <= 100)
  {
    return "A";
  }
  else if (nilai_akhir >= 81 && nilai_akhir < 86)
  {
    return "A-";
  }
  else if (nilai_akhir >= 76 && nilai_akhir < 81)
  {
    return "AB";
  }
  else if (nilai_akhir >= 71 && nilai_akhir < 76)
  {
    return "B+";
  }
  else if (nilai_akhir >= 66 && nilai_akhir < 71)
  {
    return "B";
  }
  else if (nilai_akhir >= 61 && nilai_akhir < 66)
  {
    return "BC";
  }
  else if (nilai_akhir >= 56 && nilai_akhir < 61)
  {
    return "C";
  }
  else if (nilai_akhir >= 41 && nilai_akhir < 56)
  {
    return "D";
  }
  else if (nilai_akhir >= 0 && nilai_akhir < 41)
  {
    return "E";
  }
  
  return "Invalid character";
}

void n1()
{
  int n = 0;
  std::cout << "Input jumlah mahasiswa : "; std::cin >> n;

  data dataMhs[n];

  for (int i = 0; i < n; i++)
  {
    std::cout << "\n---Mahasiswa ke-" << (i+1) << "----\n";
    std::cout << "Nama mahasiswa : ";
    std::cin.ignore();
    std::getline(std::cin, dataMhs[i].namaMhs);
    std::cout << "Nilai tugas : "; std::cin >> dataMhs[i].nilaiTugas;
    std::cout << "Nilai UTS : "; std::cin >> dataMhs[i].nilaiUTS;
    std::cout << "Nilai UAS : "; std::cin >> dataMhs[i].nilaiUAS; 
    dataMhs[i].nilaiAkhir = nilai_akhir(dataMhs[i].nilaiTugas, dataMhs[i].nilaiUTS, dataMhs[i].nilaiUAS);
  }


  std::cout << "\n---Data Kelulusan Mahasiswa---\n";

  for (int i = 0; i < n; i++)
  {
    std::cout << "=> " << dataMhs[i].namaMhs << " | ";
    std::cout << dataMhs[i].nilaiAkhir << " | ";

    std::string nilai_huruf = rentang_nilai(dataMhs[i].nilaiAkhir);
    std::cout << nilai_huruf << " | ";
    if (nilai_huruf != "D" || nilai_huruf != "E" )
    {
      std::cout << "Mahasiswa Lulus\n" ;
    }
    else if(nilai_huruf == "Invalid character")
    {
      std::cout << "Invalid Grade\n";
    }
    else
    {
      std::cout << "Mahasiswa Tidak Lulus \n";
    }

    nilai_mhs(dataMhs[i].nilaiTugas, dataMhs[i].nilaiUTS, dataMhs[i].nilaiUAS);
  }

  nilai_uas_tertinggi(dataMhs, n);
  nilai_akhir_tertinggi(dataMhs, n);
   
}
