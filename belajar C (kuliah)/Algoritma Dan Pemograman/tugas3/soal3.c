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
    printf("Harga kamar %i / hari\n\n", HK);

    JML = LM * HK;

    if(JML > 300000) {
        BYRAKH = JML - (JML * 30) / 100;
        printf("Mendapatkan diskon 30%%\n");
        printf("Total bayar setelah diskon adalah : %.2f", BYRAKH);
    }else if (JML >= 200000 && JML <= 300000) {
        printf("Mendapatkan diskon 20%%\n");
        BYRAKH = JML - (JML * 20) / 100;
        printf("Total bayar DISKON adalah : %.2f", BYRAKH);
    }else if (JML >= 100000 && JML <= 200000) {
        printf("Mendapatkan diskon 10%%\n");
        BYRAKH = JML - (JML * 10) / 100;
        printf("Total bayar DISKON adalah : %.2f", BYRAKH);
    }else {
        BYRAKH = JML;
        printf("Total bayar TIDAK DISKON adalah : %.2f", BYRAKH);
    }
}