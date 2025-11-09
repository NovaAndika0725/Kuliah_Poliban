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
    if(JML >= 100000) {
        BYRAKH = JML - (JML * 10) / 100;
        printf("Mendapatkan potongan 10%%\n");
        printf("Total : %.2f Ribu", BYRAKH);
    } else {
        BYRAKH = JML;
        printf("Total : %.2f Ribu", BYRAKH);
    }
}