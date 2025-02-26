#include <iostream>
#include <string>

struct date
{
  int day;
  int month;
  int year;
};

struct Person
{
  std::string name;
  date birthday;
};


const int MAX = 5;


void n1();
date input_date();

void n2();
void n3();
void n4();

int main(int argc, char const *argv[])
{
  // n1();
  // n2();
  // n3();
  n4();

  return 0;
}


date input_date()
{
  date tanggal;
  
  std::cout << "Input Tanggal : "; std::cin >> tanggal.day;
  std::cout << "Input Bulan : "; std::cin >> tanggal.month;
  std::cout << "Input Tahun : "; std::cin >> tanggal.year;

  return tanggal; 
}

void n1()
{
  date kalender[5];
  
  std::cout << "Masukan 5 tanggal yang berbebeda : \n";

  for (int i = 0; i < 5; i++)
  {
    std::cout << "Masukan tanggal bulan dan tahun ke - " << (i + 1) << std::endl;
    kalender[i] = input_date(); 
  }
    
}

void n2()
{
  date kalender[5];
  
  std::cout << "Masukan 5 tanggal yang berbebeda : \n";

  for (int i = 0; i < 5; i++)
  {
    std::cout << "Masukan tanggal bulan dan tahun ke - " << (i + 1) << std::endl;
    kalender[i] = input_date(); 
  }

  for (int i = 0; i < 5; i++)
  {
    std::cout << "Tanggal Ke-" << (i+1) << std::endl;
    std::cout << kalender[i].day << " - " << kalender[i].month << " - " << kalender[i].year << std::endl;
  }
}

void n3()
{
  Person orang[MAX];

  std::cout << "Masukan Nama orang beserta tanggal lahirnya !:\n";

  for (int i = 0; i < MAX ; i++)
  {
    std::cout << "Nama : ";
    std::cin.ignore();
    std::getline(std::cin, orang[i].name);
    std::cout << "Tanggal Lahir (format : tanggal bulan tahun): \n";
    std::cin >> orang[i].birthday.day >> orang[i].birthday.month >> orang[i].birthday.year;
    
  }
}

void n4()
{
  Person orang[MAX];

  std::cout << "Masukan Nama orang beserta tanggal lahirnya !:\n";
  for (int i = 0; i < MAX ; i++)
  {
    std::cout << "Nama : ";
    std::cin.ignore();
    std::getline(std::cin, orang[i].name);
    std::cout << "Tanggal Lahir (format : tanggal bulan tahun): \n";
    std::cin >> orang[i].birthday.day >> orang[i].birthday.month >> orang[i].birthday.year;
    
  }

  std::cout << "\nData orang beserta tanggal lahirnya :\n";
  for (int i = 0; i < MAX; i++)
  {
    std::cout << "\nOrang ke-" << (i+1) << " : \n";
    std::cout << "Nama : " << orang[i].name << std::endl;
    std::cout << "Tanggal lahir : " << orang[i].birthday.day << "-" << orang[i].birthday.month << "-" << orang[i].birthday.year << std::endl;  
  }
  
}