#include <iostream>
#include <stdio.h>
#include <math.h>

#define PI 3.14159


void n3()
{
  int A[2][2], B[2][2], C[2][2];

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      std::cout << "A : " << i << " : " << j << " = ";
      std::cin >> A[i][j];
    }
    
  }
  
  std::cout << std::endl;

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      std::cout << "B : " << i << " : " << j << " = ";
      std::cin >> B[i][j];
    }
    
  }

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      C[i][j] = A[i][j] + B[i][j];
      std::cout << C[i][j];
    }
    std::cout << std::endl;
  }
  
}


void findmax(int data[], int jumlah_data)
{
  
  int max = data[1];
  for (int i = 0; i < jumlah_data; i++)
  {
    if (max < data[i])
    {
      max = data[i];
    }
    
  }
  
  std::cout << "Nilai tertinggi dari input data diatas adalah : " << max << std::endl;
}

void input()
{
  int jumlah_data = 0;

  std::cout << "Masukan jumlah data : "; std::cin >> jumlah_data;

  int data[jumlah_data];
  for (int i = 0; i < jumlah_data; i++)
  {
    std::cout << "Masukan nilai : "; std::cin >> data[i]; 
  }

  findmax(data, jumlah_data);
}

float radian(float derajat)
{
  return derajat / 180.0f * PI;
}

void n7()
{
  int x[13] = {0, 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 360};

  float data[13][2];

  for (int j = 0; j < 13; j++)
  {
    data[j][0] = sin(radian(x[j]));
    data[j][1] = cos(radian(x[j]));
    data[j][2] = tan(radian(x[j]));
  }

  for (int k = 0; k < 13; k++)
  {
    std::cout << data[k][0] << " ";
    std::cout << data[k][1] << " ";
    std::cout << data[k][2] << " ";
    std::cout << std::endl;
  }
  
  

}

void n5()
{
  input();
}

int main()
{
  // n3();
  // n5();
  n7();

  return 0;
}
