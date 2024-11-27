#include <iostream>

float lingkaran(float radius);

int main()
{
  
  float ReInitialize;
  float celcius = 0.0f;
  std::cout << "\n1. Input suhu dalam celcius : "; std::cin >> celcius;

  float fahrenheit = celcius * 1.8f + 32;
  std::cout << "Celcius : " << celcius << " -> Fahrenheit : " << fahrenheit << std::endl;  

  char karakter;
  std::cout << "\n2. Input satu karakter : "; std::cin >> karakter;
  std::cout << "Karakter yang diinput : " << karakter << std::endl;
 
  float radius = 0.0f;
  std::cout << "\n3. Input Radius : "; std::cin >> radius;
  std::cout << "Luas lingkaran : " << lingkaran(radius) << std::endl;

  // lapres
  char c, d;
  c = 'd';
  d = c;
  std::cout << "\n(lapres) d : " << d << std::endl; 

  // program polynominal 3x^2 - 5x + 6;
  int x = 0;
  std::cout << "\n(lapres) Masukan bilangan X untuk perhitungan polynominal : "; std::cin >> x;
  std::cout << "x : " << x << " -> 3x^2 - 5x + 6 : " << 3 * (x * x) - 5 * x + 6 << std::endl;

  return 0;
}

float lingkaran(float radius)
{
  const float PI = 3.14f;

  return PI * (radius * radius);

}

