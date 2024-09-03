#include <iostream>

void letterf();
void kalkulator();
void bidang();

int main()
{
  // letterf();
  // kalkulator();
  bidang();

  return 0;
}

void letterf()
{
  char letter = ' ';
  int sum, valid_flag;

  std::cout << "Letter : "; std::cin >> letter;
  
  switch (letter)
  {
  case 'X':
    sum = 0;
    break;

  case 'Z':
    valid_flag = 1;
    break;

  case 'A':
    sum = 1;
    break;

  default:
    std::cout << "Unknown letter " << letter << std::endl;
    break;
  }
}

void kalkulator()
{
  int valid_operator = 1;
  char opr;
  float number1, number2, result;
  
  std::cout << "Masukan 2 bilangan & sebuah operator\n";
  std::cout << "dengan format : number1 operator number 2\n\n";
  std::cin >> number1 >> opr >> number2;

  switch (opr)
  {
  case '*':
    result = number1 * number2;
    break;
  case '/':
    result = number1 / number2;
    break;
  case '+':
    result = number1 + number2;
    break;
  case '-':
    result = number1 - number2;
    break;
  default:
    valid_operator = 0;
    break;
  }

  switch (valid_operator)
  {
  case 1:
    std::cout << number1 << ' ' << opr << ' ' << number2 << " = " << result << std::endl; 
    break; 
  default:
    std::cout << "Invalid Operator !\n";
    break;
  }
}

void bidang()
{
  std::cout << "Menu : \t1. Menghitung volume kubus\n";
  std::cout << "       \t2. Menghitung luas lingkaran\n";
  std::cout << "       \t3. Menghitung volume silinder\n";
  
  int pilihan_user = 0;
  std::cout << "Input pilihan : "; std::cin >> pilihan_user;

  int sisi = 0;
  float radian = 0.0f, tinggi = 0.0f;
  switch (pilihan_user)
  {
  case 1:
    std::cout << "Input panjang sisi kubus : "; std::cin >> sisi;
    std::cout << "Volume kubus : " << (sisi * sisi * sisi) << std::endl;
    break;
  case 2:
    std::cout << "Input jari-jari lingkaran : "; std::cin >> radian;
    std::cout << "Luas lingkaran : " << (3.14 * (radian * radian)) << std::endl;
    break;
  case 3:
    std::cout << "Input jari-jari lingkaran : "; std::cin >> radian;
    std::cout << "Input tinggi silinder : "; std::cin >> tinggi;
    std::cout << "Volume silinder : " << (3.14 * (radian * radian) * tinggi) << std::endl; 
    break;
  default:
    std::cout << "Pilihan tidak valid !\n";
    break;
  }
}