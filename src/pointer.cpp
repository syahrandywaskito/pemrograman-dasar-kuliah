#include <iostream>

int main(int argc, char const *argv[])
{
  
  int a; 
  std::cout << "a : "; std::cin >> a;
  std::cout << "nilai dari a : " << a << std::endl;
  std::cout << "address dari a : " << &a << std::endl;
  
  int *ptr_a = &a;
  std::cout << "address dari a menggunakan ptr : " << ptr_a << std::endl;
  std::cout << "mengakses value dari address a menggunakan * pada var pointer : " << *ptr_a << std::endl;

  return 0;
}
