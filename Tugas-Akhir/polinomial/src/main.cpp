#include <iostream>

struct Bilangan{
  int konstanta;
  int variabel;
  int exponen;
};

const int MAX = 11;

void penjumlahan(Bilangan* operand_1, Bilangan* operand_2, Bilangan* hasil , int oprnd1_len, int oprnd2_len);

void pengurangan(Bilangan* operand_1, Bilangan* operand_2, Bilangan* hasil , int oprnd1_len, int oprnd2_len);

void perkalian(Bilangan* operand_1, Bilangan* operand_2, Bilangan* hasil , int oprnd1_len, int oprnd2_len, int* counter);

void turunan(Bilangan* bilangan, Bilangan* hasil, int bil_len);

int power(int base, int exponen);

int main(int argc, char const *argv[])
{
  
  std::cout << "*******************************\n";
  std::cout << "*******Bilangan Polinomial*****\n";
  std::cout << "*******************************\n";
  std::cout << "Data :\n";
  std::cout << "\tP1 = 6x^8 + 8x^7 + 5x^5 + 1x^3 + 15\n";
  std::cout << "\tP2 = 3x^9 + 4x^7 + 3x^4 + 2x^3 + 2x^2 + 10\n";
  std::cout << "\tP3 = 1x^2 + 5\n";

  std::cout << std::endl;

  std::cout << "1. Penjumlahan\n";
  std::cout << "2. Pengurangan\n";
  std::cout << "3. Perkalian\n";
  std::cout << "4. Turunan\n";
  
  int pil_operasi{0};
  int pil_bilangan{0};

  /**
   * variable akan diisi 0 untuk x
   * jika tidak memiliki variabel maka diisi 1
   * berlaku juga untuk exponen
   */
  Bilangan P1[5] = {
    {6, 0, 8}, {8, 0, 7}, {5, 0, 5}, {1, 0, 3}, {15, 1, 1}
  };

  Bilangan P2[6] = {
    {3, 0, 9}, {4, 0, 7}, {3, 0, 4}, {2, 0, 3}, {2, 0, 2}, {10, 1, 1}
  };

  Bilangan P3[2] = {
    {1, 0, 2}, {5, 1, 1}
  };

  std::cout << "Pilih jenis operasi aritmatik : "; std::cin >> pil_operasi;

  Bilangan *oprnd1_p;
  Bilangan *oprnd2_p;
  Bilangan hasil_operasi[100] = {0};
  
  int oprnd1_len = 0;
  int oprnd2_len = 0;
  int counter = 0;
  int loop_len = 0;

  switch (pil_operasi)
  {
  case 1:
    
    std::cout << "masukkan p yang akan dijumlah : ";
    std::cin >> pil_bilangan;
    switch (pil_bilangan)
    {
    case 1:
      oprnd1_p = P1;
      oprnd1_len = sizeof(P1)/sizeof(P1[0]);
      break;
    case 2:
      oprnd1_p = P2;
      oprnd1_len = sizeof(P2)/sizeof(P2[0]);
      break;
    case 3:
      oprnd1_p = P3;
      oprnd1_len = sizeof(P3)/sizeof(P3[0]);
      break;
    default:
      std::cout << "Bilangan tidak ada !!";
      break;
    }

    std::cout << "masukkan p yang akan dijumlah : ";
    std::cin >> pil_bilangan;
    switch (pil_bilangan)
    {
    case 1:
      oprnd2_p = P1;
      oprnd2_len = sizeof(P1)/sizeof(P1[0]);
      break;
    case 2:
      oprnd2_p = P2;
      oprnd2_len = sizeof(P2)/sizeof(P2[0]);
      break;
    case 3:
      oprnd2_p = P3;
      oprnd2_len = sizeof(P3)/sizeof(P3[0]);
      break;
    default:
      std::cout << "Bilangan tidak ada !!";
      break;
    }

    penjumlahan(oprnd1_p, oprnd2_p, hasil_operasi, oprnd1_len, oprnd2_len);
    loop_len = oprnd1_len + oprnd2_len;
    break;

  case 2:
    
    std::cout << "masukkan p yang akan dikurang : ";
    std::cin >> pil_bilangan;
    switch (pil_bilangan)
    {
    case 1:
      oprnd1_p = P1;
      oprnd1_len = sizeof(P1)/sizeof(P1[0]);
      break;
    case 2:
      oprnd1_p = P2;
      oprnd1_len = sizeof(P2)/sizeof(P2[0]);
      break;
    case 3:
      oprnd1_p = P3;
      oprnd1_len = sizeof(P3)/sizeof(P3[0]);
      break;
    default:
      std::cout << "Bilangan tidak ada !!";
      break;
    }

    std::cout << "masukkan p yang akan dikurang : ";
    std::cin >> pil_bilangan;
    switch (pil_bilangan)
    {
    case 1:
      oprnd2_p = P1;
      oprnd2_len = sizeof(P1)/sizeof(P1[0]);
      break;
    case 2:
      oprnd2_p = P2;
      oprnd2_len = sizeof(P2)/sizeof(P2[0]);
      break;
    case 3:
      oprnd2_p = P3;
      oprnd2_len = sizeof(P3)/sizeof(P3[0]);
      break;
    default:
      std::cout << "Bilangan tidak ada !!";
      break;
    }

    pengurangan(oprnd1_p, oprnd2_p, hasil_operasi, oprnd1_len, oprnd2_len);
    loop_len = oprnd1_len + oprnd2_len;
    break;
  
  case 3:
    
    std::cout << "masukkan p yang akan dikali : ";
    std::cin >> pil_bilangan;
    switch (pil_bilangan)
    {
    case 1:
      oprnd1_p = P1;
      oprnd1_len = sizeof(P1)/sizeof(P1[0]);
      break;
    case 2:
      oprnd1_p = P2;
      oprnd1_len = sizeof(P2)/sizeof(P2[0]);
      break;
    case 3:
      oprnd1_p = P3;
      oprnd1_len = sizeof(P3)/sizeof(P3[0]);
      break;
    default:
      std::cout << "Bilangan tidak ada !!";
      break;
    }

    std::cout << "masukkan p yang akan dikali : ";
    std::cin >> pil_bilangan;
    switch (pil_bilangan)
    {
    case 1:
      oprnd2_p = P1;
      oprnd2_len = sizeof(P1)/sizeof(P1[0]);
      break;
    case 2:
      oprnd2_p = P2;
      oprnd2_len = sizeof(P2)/sizeof(P2[0]);
      break;
    case 3:
      oprnd2_p = P3;
      oprnd2_len = sizeof(P3)/sizeof(P3[0]);
      break;
    default:
      std::cout << "Bilangan tidak ada !!";
      break;
    }

    perkalian(oprnd1_p, oprnd2_p, hasil_operasi, oprnd1_len, oprnd2_len, &counter);
    loop_len = counter;
    break;

  case 4:
    std::cout << "Masukan P yang akan diturunkan : ";
    std::cin >> pil_bilangan;
    switch (pil_bilangan)
    {
    case 1:
      oprnd1_p = P1;
      oprnd1_len = sizeof(P1)/sizeof(P1[0]);
      break;
    case 2:
      oprnd1_p = P2;
      oprnd1_len = sizeof(P2)/sizeof(P2[0]);
      break;
    case 3:
      oprnd1_p = P3;
      oprnd1_len = sizeof(P3)/sizeof(P3[0]);
      break;
    default:
      std::cout << "Bilangan tidak ada !!\n";
      break;
    }
    turunan(oprnd1_p, hasil_operasi, oprnd1_len);
    loop_len = oprnd1_len;
    break;

  default:
    std::cout << "Pilihan operasi tidak ada !!\n";
    break;
  }


  for (int i = 0; i < loop_len; i++)
  {
    if (hasil_operasi[i].konstanta != 0)
    {
      std::cout << hasil_operasi[i].konstanta;

      if (hasil_operasi[i].variabel == 0)
      {
          std::cout << "x";
      }
      else if(hasil_operasi[i].variabel > 1)
      {
          std::cout << hasil_operasi[i].variabel;
      }

      if (hasil_operasi[i].exponen != 1)
      {
          std::cout << "^" << hasil_operasi[i].exponen;
      }
      
      if (hasil_operasi[i+1].konstanta != 0 || hasil_operasi[i+2].konstanta != 0)
      {
          std::cout << " + ";
      }
    }
  }

  int nilai_x = 0;
  int hasil_akhir = 0;
  int konstanta = 0;
  int variabel = 0;
  int exponen = 0;

  std::cout << "\n\nMasukan nilai x : "; std::cin >> nilai_x;

  // hitung total
  for (int i = 0; i < loop_len; i++)
  {

    if (hasil_operasi[i].konstanta != 0)
    {
      konstanta =  hasil_operasi[i].konstanta;
      // std::cout << konstanta;

      if (hasil_operasi[i].variabel == 0 && hasil_operasi[i].variabel < 1)
      {
          variabel = nilai_x;
          // std::cout << "(" << variabel << ")";
      }
      else
      {
          variabel = 1;
      }

      if (hasil_operasi[i].exponen != 1)
      {
          exponen = hasil_operasi[i].exponen;
          // std::cout << "^" << exponen;
      }
      else
      {
          exponen = 1;
      }
      
      hasil_akhir += konstanta * power(variabel, exponen);
      // std::cout << " {" << hasil_akhir << "} ";
      
      // if (hasil_operasi[i+1].konstanta != 0)
      // {
      //     std::cout << " + ";
      // }
    }
  }

  std::cout << "\nTotal : " << hasil_akhir << std::endl;
  

  return 0;
}

int power(int base, int exponen)
{
  int result = 1;
  for (int i = 1; i <= exponen; i++)
  {
    result *= base;
  }
  return result;
  
}

void penjumlahan(Bilangan* operand_1, Bilangan* operand_2, Bilangan* hasil, int oprnd1_len, int oprnd2_len)
{

  // menggabungkan panjang dari operand 1 dan operand 2
  int total_len = oprnd1_len + oprnd2_len;

  // array sebagai tempat untuk menggabungkan dua operand
  Bilangan gabungan[100] = {0};

  // mennggabungkan bilangan operand 1
  for (int i = 0; i < oprnd1_len; i++)
  {
    gabungan[i] = operand_1[i];
  }

  // menggabungkan bilangan operand 2
  for (int i = 0; i < oprnd2_len; i++)
  {
    gabungan[oprnd1_len + i] = operand_2[i];
  }

  // pengurutan bilangan
  for (int i = 0; i < total_len - 1; i++)
  {
    for (int j = 0; j < total_len - i - 1; j++)
    {
      if (gabungan[j].exponen < gabungan[j + 1].exponen)
      {
        // memindahkan bilangan jika bilangan tersebut lebih kecil dari sebelahnya
        Bilangan temp = gabungan[j];
        gabungan[j] = gabungan[j + 1];
        gabungan[j + 1] = temp;
      }
      
    }
    
  }  

  bool added = false;

  // menambahkan bilangan setelah diurutkan
  for (int i = 0; i < total_len; i++)
  {
    // jika exponen bilangan sama dengan sebelahnya maka akan ditambah
    // dan dimasukkan array hasil
    if (gabungan[i].exponen == gabungan[i+1].exponen)
    {
      hasil[i].konstanta = gabungan[i].konstanta + gabungan[i+1].konstanta;
      hasil[i].variabel = gabungan[i].variabel;
      hasil[i].exponen = gabungan[i].exponen;

      // flag added / tambah akan menjadi true
      added = true;
    }
    // jika tidak sama maka dibiarkan dan dimasukkan ke dalam array hasil
    else
    {
      // jika added false maka mulai dimasukkan yang tidak bisa ditambah
      if (!added)
      {
        hasil[i].konstanta = gabungan[i].konstanta;
        hasil[i].variabel = gabungan[i].variabel;
        hasil[i].exponen = gabungan[i].exponen;
      }
      // reset kondisi agar kondisi if diatas bisa berjalan
      added = false;
    }
    
  }

}

void pengurangan(Bilangan* operand_1, Bilangan* operand_2, Bilangan* hasil, int oprnd1_len, int oprnd2_len)
{

  // menggabungkan panjang dari operand 1 dan operand 2
  int total_len = oprnd1_len + oprnd2_len;

  // array sebagai tempat untuk menggabungkan dua operand
  Bilangan gabungan[100] = {0};

  // mennggabungkan bilangan operand 1
  for (int i = 0; i < oprnd1_len; i++)
  {
    gabungan[i] = operand_1[i];
  }

  // menggabungkan bilangan operand 2
  for (int i = 0; i < oprnd2_len; i++)
  {
    gabungan[oprnd1_len + i] = operand_2[i];
  }

  // pengurutan bilangan
  for (int i = 0; i < total_len - 1; i++)
  {
    for (int j = 0; j < total_len - i - 1; j++)
    {
      if (gabungan[j].exponen < gabungan[j + 1].exponen)
      {
        // memindahkan bilangan jika bilangan tersebut lebih kecil dari sebelahnya
        Bilangan temp = gabungan[j];
        gabungan[j] = gabungan[j + 1];
        gabungan[j + 1] = temp;
      }
      
    }
    
  }  

  bool added = false;

  // menambahkan bilangan setelah diurutkan
  for (int i = 0; i < total_len; i++)
  {
    // jika exponen bilangan sama dengan sebelahnya maka akan ditambah
    // dan dimasukkan array hasil
    if (gabungan[i].exponen == gabungan[i+1].exponen)
    {
      hasil[i].konstanta = gabungan[i].konstanta - gabungan[i+1].konstanta;
      hasil[i].variabel = gabungan[i].variabel;
      hasil[i].exponen = gabungan[i].exponen;

      // flag added / tambah akan menjadi true
      added = true;
    }
    // jika tidak sama maka dibiarkan dan dimasukkan ke dalam array hasil
    else
    {
      // jika added false maka mulai dimasukkan yang tidak bisa ditambah
      if (!added)
      {
        hasil[i].konstanta = gabungan[i].konstanta;
        hasil[i].variabel = gabungan[i].variabel;
        hasil[i].exponen = gabungan[i].exponen;
      }
      // reset kondisi agar kondisi if diatas bisa berjalan
      added = false;
    }
    
  }

}

void perkalian(Bilangan* operand_1, Bilangan* operand_2, Bilangan* hasil , int oprnd1_len, int oprnd2_len, int* counter)
{

  // array sebagai tempat untuk menggabungkan dua operand
  Bilangan kali[100] = {0};

    for (int j = 0; j < oprnd1_len; j++)
    {
      for (int k = 0; k < oprnd2_len; k++)
      {
        // std::cout << "counter : " << counter << std::endl;
        // std::cout << "j : " << j << " | K : " << k << std::endl;
        // std::cout << operand_1[j].konstanta << "(" << operand_1[j].variabel << ")" << "^" << operand_1[j].exponen << " * ";
        // std::cout << operand_2[k].konstanta << "(" << operand_2[k].variabel << ")" << "^" << operand_2[k].exponen << " = ";

        if ((operand_1[j].variabel == 1 && operand_1[j].exponen == 1) && (operand_2[k].variabel == 1 && operand_2[k].exponen == 1))
        {
          kali[*counter].konstanta = operand_1[j].konstanta * operand_2[k].konstanta;
          kali[*counter].variabel = 1;
          kali[*counter].exponen = 1;
          // std::cout << kali[*counter].konstanta << "(" << kali[*counter].variabel << ")" << "^" << kali[*counter].exponen << std::endl;
          // std::cout << "Kondisi 1 | operand 1 & 2 = satuan \n";
        }
        else if (operand_1[j].variabel == 1 && operand_1[j].exponen == 1)
        {
          kali[*counter].konstanta = operand_1[j].konstanta * operand_2[k].konstanta;
          kali[*counter].variabel = 0;
          kali[*counter].exponen = operand_2[k].exponen;
          // std::cout << kali[*counter].konstanta << "(" << kali[*counter].variabel << ")" << "^" << kali[*counter].exponen << std::endl;
          // std::cout << "Kondisi 2 | operand 1 = satuan \n";
        }
        else if (operand_2[k].variabel == 1 && operand_2[k].exponen == 1)
        {
          kali[*counter].konstanta = operand_1[j].konstanta * operand_2[k].konstanta;
          kali[*counter].variabel = 0;
          kali[*counter].exponen = operand_1[j].exponen;
          // std::cout << kali[*counter].konstanta << "(" << kali[*counter].variabel << ")" << "^" << kali[*counter].exponen << std::endl;
          // std::cout << "Kondisi 3 | operand 2 = satuan \n";
        }
        else
        {
          kali[*counter].konstanta = operand_1[j].konstanta * operand_2[k].konstanta;
          kali[*counter].variabel = 0;
          kali[*counter].exponen = operand_1[j].exponen + operand_2[k].exponen;
          // std:: << kali[*counter].konstanta << "(" << kali[*counter].variabel << ")" << "^" << kali[*counter].exponen << std::endl;
          // std::cout << "Kondisi 4 | operand 1 & 2 = bukan satuan \n";
        }
        
        // std::cout << kali[j].konstanta << "(" << kali[j].variabel << ")" << "^" << kali[j].exponen << std::endl;
        // std::cout << "-----\n";
        // std::cout << "Operand 1 satuan " << (operand_1[j].variabel == 1 && operand_1[j].exponen == 1) << std::endl;
        // std::cout << "Operand 2 satuan " << (operand_2[k].variabel == 1 && operand_2[k].exponen == 1) << std::endl;
        // std::cout << "Operand 1 & 2 satuan " << ((operand_1[j].variabel == 1 && operand_1[j].exponen == 1) && (operand_2[k].variabel == 1 && operand_2[k].exponen == 1)) << std::endl;
        // std::cout << "Operand 1 & 2 bukan satuan " << !((operand_1[j].variabel == 1 && operand_1[j].exponen == 1) && (operand_2[k].variabel == 1 && operand_2[k].exponen == 1)) << std::endl;
        // std::cout << "********\n";
        
        (*counter)++;
        
      }
      
    }
    

  // pengurutan bilangan
  for (int i = 0; i < *counter - 1; i++)
  {
    for (int j = 0; j < *counter - i - 1; j++)
    {
      if (kali[j].exponen < kali[j + 1].exponen)
      {
        // memindahkan bilangan jika bilangan tersebut lebih kecil dari sebelahnya
        Bilangan temp = kali[j];
        kali[j] = kali[j + 1];
        kali[j + 1] = temp;
      }
      
    }
    
  }
  
  int idx = 0;

  hasil[*counter] = {0};

  for (int i = 0; i < *counter; i++)
  {
        hasil[idx] = kali[i]; // Salin elemen awal
        while (i < *counter - 1 && kali[i].exponen == kali[i + 1].exponen) {
            hasil[idx].konstanta += kali[i + 1].konstanta; // Tambahkan konstanta
            i++;
        }
        idx++; // Pindah ke elemen berikutnya di hasil
  }
}

void turunan(Bilangan* bilangan, Bilangan* hasil, int bil_len)
{
  for (int i = 0; i < bil_len; i++)
  {
    if (bilangan[i].variabel == 1 && bilangan[i].exponen == 1)
    {
      hasil[i].konstanta = 0;
      hasil[i].variabel = bilangan[i].variabel - 1;
      hasil[i].exponen = bilangan[i].exponen - 1;
    }
    else
    {
      hasil[i].konstanta = bilangan[i].konstanta * bilangan[i].exponen;
      hasil[i].variabel = bilangan[i].variabel;
      hasil[i].exponen = bilangan[i].exponen - 1;
    }
    
  }

}