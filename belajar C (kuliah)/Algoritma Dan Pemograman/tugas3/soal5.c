#include <stdio.h>

int main() {
  int LM, HK, kategori;
  float JML, BYRAKH;

  printf("Masukan lama menginap: ");
  scanf_s("%i", &LM);
  printf("Masukan harga kamar: ");
  scanf_s("%i", &HK);

  printf("Lama menginap %i hari\n", LM);
  printf("Harga kamar: Rp%i ribu / hari\n\n", HK);

  JML = LM * HK;

  if (JML > 300000)
    kategori = 3;
  else if (JML >= 200000) 
    kategori = 2;
  else if (JML >= 100000)
    kategori = 1;
  else
    kategori = 0;

  switch (kategori) {
  case 3:
    printf("Harga sebelum diskon : %.2f\n", JML);
    BYRAKH = JML - (JML * 30) / 100;
    printf("Mendapatkan diskon 30%%\n");
    break;
  case 2:
    printf("Harga sebelum diskon : %.2f\n", JML);
    BYRAKH = JML - (JML * 20) / 100;
    printf("Mendapatkan diskon 20%%\n");
    break;
  case 1:
    printf("Harga sebelum diskon : %.2f\n", JML);
    BYRAKH = JML - (JML * 10) / 100;
    printf("Mendapatkan diskon 10%%\n");
    break;
  default:
    BYRAKH = JML;
    printf("Total bayar tidak dapat diskon\n");
    break;
  }

  if (kategori == 0)
    printf("Total bayar tidak dapat diskon adalah : %.2f\n", BYRAKH);
  else
    printf("Total bayar setelah diskon adalah : %.2f\n", BYRAKH);

  return 0;
}
