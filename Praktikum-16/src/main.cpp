#include <iostream>

/**
 * fungsi yang tidak memiliki return tidak akan bermasalah 
 * jika function type nya void
 */
void tambah(int a, int b)
{
  std::cout << a << " + " << b << " = " << a+b << std::endl;
}


/**
 * Fungsi yang memiliki return value jika tidak di assign ke variable
 * atau statement manapun maka tidak berguna namun tidak error
 */
int kuadrat(int n)
{
  return n * n;
}



/**
 * fungsi void jika diassign ke sebuah variable atau statement
 * maka akan error
 */
void kurang(int x, int y)
{
  int total = x - y;
}

/**
 * semua nilai dari setiap line berjalan pada saat program dijalankan
 */
OddEvenTest(int b)
{
 int a;

 a = b % 2;
 return a;
}


void demo(void);
void fung_a(void);
void fung_b(void);

int x = 20; 

int main(int argc, char const *argv[])
{
  // tambah(10, 5);
  // kuadrat(3);
  // int hasil = kurang(8, 6);

  // int a, hasil;
  // a = 5;
  // hasil = OddEvenTest(a);
  // printf("a=%d; hasil=%d\n",a,hasil);

  int i=0;

  while(i < 3) 
  {
    demo();
    i++;
  } 

  // x += 2;
  // fung_a();
  // fung_a();
  // printf("\nNilai x dalam main() = %d\n\n",x);
  return 0;
}

void fung_a(void)
{
  static int x = 5;
  x++;
  printf("Nilai x dalam fung_a() = %d\n", x);
  fung_b();
}
void fung_b(void)
{
  x--;
  printf("Nilai x dalam fung_b() = %d\n", x);
}

void demo(void)
{
  auto var_auto = 0;
  static int var_static = 0;

  printf("auto = %d, static = %d\n", var_auto, var_static);
  ++var_auto;
  ++var_static;
}
