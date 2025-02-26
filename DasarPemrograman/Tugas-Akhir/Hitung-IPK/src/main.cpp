#include <iostream>
#include <stdio.h>

struct IP
{
  int SKS;
  int harkat;
};

void total_sks_harkat(int* sks, int* harkat, int* total_kali);
void hasil_IP(int* jumlah_sks, int* total_kali, double* IP_akhir);


int main(int argc, char const *argv[])
{
  FILE *fptr;
  fptr = fopen("filename.txt", "w");

  std::cout << "\n+-------------------------------+\n";
  std::cout << "|\t\tHARKAT\t\t|\n";
  std::cout << "+-------------------------------+\n";
  std::cout << "|\tA\t:\t4\t|\n";
  std::cout << "|\tA-\t:\t3.75\t|\n";
  std::cout << "|\tA/B\t:\t3\t|\n";
  std::cout << "|\tB+\t:\t3.5\t|\n";
  std::cout << "|\tB\t:\t3\t|\n";
  std::cout << "|\tB-\t:\t2.75\t|\n";
  std::cout << "|\tB/C\t:\t2.5\t|\n";
  std::cout << "|\tC+\t:\t2.25\t|\n";
  std::cout << "|\tC\t:\t2\t|\n";
  std::cout << "|\tC-\t:\t1.75\t|\n";
  std::cout << "|\tC/D\t:\t1.5\t|\n";
  std::cout << "|\tD+\t:\t1.25\t|\n";
  std::cout << "|\tD\t:\t1\t|\n";
  std::cout << "|\tD-\t:\t0.75\t|\n";
  std::cout << "|\tD/E\t:\t0.5\t|\n";
  std::cout << "|\tE+\t:\t0.25\t|\n";
  std::cout << "|\tE\t:\t0\t|\n";
  std::cout << "+-------------------------------+\n";

  char answer = 'y';

  do
  {
    if (answer == 'y')
    {
      int jumlah_matkul = 0;
      std::cout << "Banyak mata kuliah : "; std::cin >> jumlah_matkul;

      IP matkul[jumlah_matkul] = {0};
      int i = 0;
      int jumlah_sks = 0;
      int total_kali = 0;
      double ip_akhir = 0.0;
      
      while (i < jumlah_matkul)
      {
        std::cout << "Matakuliah ke " << (i + 1) << std::endl;
        fprintf(fptr, "Matakuliah ke %d\n", (i + 1));

        std::cout << "SKS : "; 
        std::cin >> matkul[i].SKS;
        fprintf(fptr, "SKS : %d\n", matkul[i].SKS);

        std::cout << "Harkat : ";
        std::cin >> matkul[i].harkat; 
        fprintf(fptr, "Harkat : %d\n", matkul[i].harkat); 

        std::cout << std::endl;
        fprintf(fptr, "\n");

        total_sks_harkat(&matkul[i].SKS, &matkul[i].harkat, &total_kali);
        jumlah_sks += matkul[i].SKS;

        i++;
      }
      
      std::cout << std::endl;
      fprintf(fptr, "\n");
      // std::cout << "Total kali SKS & Harkat\t\t: " << total_kali << std::endl;
      hasil_IP(&jumlah_sks, &total_kali, &ip_akhir);
      std::cout << "Total SKS\t\t: " << jumlah_sks << std::endl;
      fprintf(fptr, "Total SKS\t\t: %d\n", jumlah_sks);

      std::cout << "IP Semester\t\t: " << ip_akhir << std::endl;
      fprintf(fptr, "IP Semester\t\t: %f\n", ip_akhir);

      if (ip_akhir >= 1.00f)
      {
        std::cout << "E" << std::endl;
      }
      
    }
    else
    {
      std::cout << "Input Invalid !!\n";  
    }
    
    std::cout << "Lagi ? [y/t] : "; std::cin >> answer;
  } while (answer != 't');
  
  fclose(fptr);
  return 0;
}

void total_sks_harkat(int* sks, int* harkat, int* total_kali)
{
  *total_kali += *sks * *harkat;
}

void hasil_IP(int* jumlah_sks, int* total_kali, double* IP_akhir)
{
  *IP_akhir = static_cast<double>(*total_kali) / static_cast<double>(*jumlah_sks);
}
