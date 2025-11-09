#include <stdio.h>

int main()
{
    int LM, HK,JML;
    printf("Masukan lama menginap: ");
    scanf_s("%i", &LM);
    printf("Masukan harga kamar: ");
    scanf_s("%i", &HK);
    printf("Lama menginap %i hari\n", LM);
    printf("Harga kamar %i ribu / hari\n", HK);
    JML = LM * HK;
    printf("Harga yang harus dibayar: %i ribu", JML);
}