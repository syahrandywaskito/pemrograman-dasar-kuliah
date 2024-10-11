#include <iostream>
#include <math.h>
#define PI 3.14159

void n1();
void n2();
void n3();

float radian(float derajat)
{
  return derajat / 180.0f * PI;
}


int main(int argc, char const *argv[])
{
  // n1();
  // n2();
  n3();

  return 0;
}

void n1()
{
  int arr[10];
  
  // input bilangan
  for (int i = 0; i < 10; i++)
  {
    int temp = i + 1;
    std::cout << "input bilangan ke-" << temp << " : "; 
    std::cin >> arr[i];
  }

  // sort logic
  for (int i = 0; i < 10 - 1; i++)
  {
    for (int j = 0; j < 10 - i - 1 ; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
      
    }
    
  }
  

  // print after short
  for (int i = 0; i < 10; i++)
  {
    std::cout << arr[i] << " ";
  } 
  
  std::cout << std::endl;
}

void n2()
{
  int x[13] = {0, 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 360};

  float data[13][2];

  for (int j = 0; j < 13; j++)
  {
    data[j][0] = sin(radian(x[j]));
    data[j][1] = cos(radian(x[j]));
  }

  for (int k = 0; k < 13; k++)
  {
    std::cout << data[k][0] << " | ";
    std::cout << data[k][1] << " | ";
    std::cout << std::endl;
  }
}

void n3()
{
  int x[13] = {0, 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 360};

  float data[13][2];
  float total_sin;
  float total_cos;
  float ava_sin;
  float ava_cos;

  for (int j = 0; j < 13; j++)
  {
    data[j][0] = sin(radian(x[j]));
    data[j][1] = cos(radian(x[j]));
  }

  for (int k = 0; k < 13; k++)
  {
    std::cout << data[k][0] << " | ";
    std::cout << data[k][1] << " | ";
    std::cout << std::endl;
  }

  for (int i = 0; i < i; i++)
  {
    total_sin += data[i][0];
    total_cos -= data[i][1];
  }

  ava_sin = total_sin / 13.0f;
  ava_cos = total_cos / 13.0f;

  std::cout << "rata-rata sin : " << ava_sin << std::endl;
  std::cout << "rata-rata cos : " << ava_cos << std::endl; 
  
}