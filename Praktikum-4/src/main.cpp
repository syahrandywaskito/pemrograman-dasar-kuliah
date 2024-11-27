#include <iostream>
#include <cmath>

int main()
{

  int number_a = 22;
  number_a = number_a + 4;
  number_a = number_a - 2;

  std::cout << "a = " << number_a << std::endl;

  std::cout << "1. x = " <<  (2 + 3) - 10 * 2 << std::endl;
  std::cout << "1. x = " <<  (2 + 3) - (10 * 2) << std::endl;
  std::cout << "1. x = " <<  10 % 3 * 2 + 1 << std::endl;

  char kar = 'A';
  kar = kar + 32;
  std::cout << static_cast<int>(kar) << std::endl;

  // no 1
  int bulat = 32767;
  float pecahan_1 = 339.2345678f;
  double pecahan_2 =  3.4567e+40;
  char karakter = 'S';

  std::cout << "\n1. Tampilkan variable : \n";
  std::cout << "Bulat : " << bulat << std::endl;
  std::cout << "Pecahan 1 : " << pecahan_1 << std::endl;
  std::cout << "Pecahan 2 : " << pecahan_2 << std::endl;
  std::cout << "Karakter : " << karakter << std::endl;
  
  // no 2
  int a = 12;
  int b = 2;
  int c = 3;
  int d = 4;

  std::cout << "\n2. Operator : \n";
  std::cout << "hasil dari a % b : " << a % b << std::endl;
  std::cout << "hasil dari a - c : " << a - c << std::endl;
  std::cout << "hasil dari a + b : " << a + b << std::endl;
  std::cout << "hasil dari a / b : " << a / b << std::endl;
  std::cout << "hasil dari a / d * d + a mod d : " << a / d * d + a % d << std::endl;
  std::cout << "hasil dari a mod d / d * a - c : " << a % d / d * a - c << std::endl;

  // no 3
  // rumus diskriminan D = b^2-4ac
  int bil_a = 0;
  int bil_b = 0;
  int bil_c = 0;

  std::cout << "\n3. Diskriminan \n";
  std::cout << "Input nilai a : "; std::cin >> bil_a; 
  std::cout << "Input nilai b : "; std::cin >> bil_b; 
  std::cout << "Input nilai c : "; std::cin >> bil_c;

  int diskriminan = bil_b * bil_b - 4 * bil_a * bil_c;
  std::cout << "D = b^2 - 4ac = " << diskriminan << std::endl;

  // no. 4

  float af = 12, bf = 2, cf = 3, df = 4;

  std::cout << "\n4. Re-type\n";
  std::cout << "hasil dari a % b : " << fmod(af, bf) << std::endl;
  std::cout << "hasil dari a - c : " << (af - cf) << std::endl;
  std::cout << "hasil dari a + b : " << (af + bf) << std::endl;
  std::cout << "hasil dari a / b : " << (af / bf) << std::endl;
  std::cout << "hasil dari a / d * d + a mod d : " << af / df * df + fmod(af, df) << std::endl;
  std::cout << "hasil dari a mod d / d * a - c : " << fmod(af, df) / df * af - cf << std::endl;

  float bil_b_f = static_cast<float>(bil_b);
  float bil_c_f = static_cast<float>(bil_c);
  float bil_a_f = static_cast<float>(bil_a);

  std::cout << std::endl;
  float diskriminan_f = static_cast<float>(bil_b_f * bil_b_f - 4 * bil_a_f * bil_c_f);
  std::cout << "D = b^2 - 4ac = " << diskriminan_f << std::endl;

  return 0;
}
