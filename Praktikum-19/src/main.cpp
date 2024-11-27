#include <iostream>


void n1();
void n2();
void n3();
void n4();

int main()
{

  // n1();
  // n2();
  // n3();
  n4();
  
  
}

void n1()
{
  char letter[3][3];
  letter[2][2] = 'Z';
  std::cout << "letter[2][2] : " <<  letter[2][2] << std::endl;
  
}

void n2()
{
  char letter[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if(i == 2 && j == 2)
      {
        letter[2][2] = 'Z';
      }
      else
      {
        std::cout << "letter[" << i << "][" << j << "] : ";
        std::cin >> letter[i][j];
      }
    }
    
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      std::cout << letter[i][j] << " ";
    }
    std::cout << std::endl;
  }
  
}

void n3()
{
  int A[2][2];
  int B[2][2];
  int C[2][2];

  // input matriks A
  std::cout << "Matriks A!!" << std::endl;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      std::cout << "A[" << i << "][" << j << "] : ";
      std::cin >> A[i][j];
    }
    
  }

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      std::cout << A[i][j] << " ";
    }
    std::cout << std::endl;
  }
  

  std::cout << std::endl;

  // input matriks B
  std::cout << "Matrisk B!!" << std::endl;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      std::cout << "A[" << i << "][" << j << "] : ";
      std::cin >> B[i][j];
    }
    
  }

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      std::cout << B[i][j] << " ";
    }
    std::cout << std::endl;
  }

  
  // tambah untuk matriks C
  std::cout << "\nMatriks C !!" << std::endl;  
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      C[i][j] = A[i][j] + B[i][j];
      std::cout << C[i][j] << " ";
    }
    std::cout << std::endl;
  }
  
}

void n4()
{
  char letter[] = "sebuah array letter";
  char karakter;
  int count = 0;

  std::cout << "Input karakter : "; std::cin >> karakter;

  int len = sizeof(letter) / sizeof(char);

  for (int i = 0; i < len; i++)
  {
    if (karakter == letter[i])
    {
      count++;
    }
    
  }
  
  std::cout << "Karakter : " << karakter << " berjumlah " << count << std::endl;
}