#include <iostream>
#include <string>

struct Student
{
  int id;
  std::string nama;
  float gpa;
};

int main ()
{
  int n;
  std::cout << "Jumlah mahasiswa : "; std::cin >> n;

  Student students[n];

  // input mahasiswa
  for (int i = 0; i < n; i++)
  {
    std::cout << "id mahasiswa : "; std::cin >> students[i].id;
    std::cout << "nama mahasiswa : "; std::cin >> students[i].nama;
    std::cout << "GPA mahasiswa : "; std::cin >> students[i].gpa; 
  }

  // show list struct 
  for (int i = 0; i < n; i++)
  {
    std::cout << "ID : " << students[i].id << ", Nama : " << students[i].nama << ", GPA  : " << students[i].gpa; 
  }

  // find highest GPA
  float highGPA = 0.0f;
  std::string nama = "";
  int id = 0;

  for (int i = 0; i < n; i++)
  {
    // cek apakah high gpa kurang dari nilai iterasi
     if (highGPA < students[i].gpa)
     {
        // masukan nilai tertinggi
        highGPA = students[i].gpa;
        nama = students[i].nama;
        id = students[i].id;
     }
  }

  std::cout << "High GPA : " << highGPA << " ( nama : " << nama << ", id : " << id << " )";
  
}
