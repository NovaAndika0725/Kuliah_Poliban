#include <stdio.h>

int main()
{
    int LM, HK;
    float JML, BYRAKH;
    printf("Masukan lama menginap: ");
    scanf_s("%i", &LM);
    printf("Masukan harga kamar: ");
    scanf_s("%i", &HK);
    printf("Lama menginap %i hari\n", LM);
    printf("Harga kamar %i ribu / hari\n\n", HK);

    JML = LM * HK;

    if(JML > 300000 && HK >= 50000 && LM >= 3) {
        BYRAKH = JML - (JML * 30) / 100;
        printf("DPT KARTU DISC\n");
        printf("Total bayar setelah diskon adalah : %.2f", BYRAKH);
    }else {
        BYRAKH = JML;
        printf("TAK DPT KARTU DISC\n");
        printf("Total bayar TIDAK DISKON adalah : %.2f", BYRAKH);
    }
}