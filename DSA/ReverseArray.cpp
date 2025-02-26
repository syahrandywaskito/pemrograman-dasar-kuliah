#include <iostream>

void ReverseArray(int* arr, int size);

int main(int argc, char const *argv[])
{
  int number[5] = {1, 2, 3, 4, 5};
  
  ReverseArray(number, 5);

  return 0;
}

void ReverseArray(int* arr, int size)
{
  int newNumber[size] = {0};

  int index = 0;
  for (int i = size; i > 0; i--)
  {
    // std::cout << "value : " << *(ptr + i) << std::endl;
    newNumber[index] = *(arr + (i - 1));
    index++;
  }

  for (int i = 0; i < 5; i++)
  {
    std::cout << "new array : " << newNumber[i] << std::endl;
  }
}

