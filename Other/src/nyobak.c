#include <stdio.h>

int main(int argc, char const *argv[])
{
  
  int spasi = 0, kar = 0, i = 0;
  char kal[9999];

  scanf("%[^\n]", &kal);
  while (kal[i] != '\0')
  {
    if (kal[i] != ' ')
    {
      kar++;
    }
    else{
      spasi++;
    }
    i++;
  }

  printf("Jumlah karakter (tanpa spasi) : %d", kar);
  printf("Jumlah spasi : %d", spasi);
  
  return 0;
}
