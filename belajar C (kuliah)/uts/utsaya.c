#include <stdio.h>

int main() {
    int QTY;
    float HRGBRG, JMLBYR, DISC = 0, BYRAKH;

    printf("Masukkan banyak barang : ");
    scanf("%d", &QTY);

    printf("Masukkan harga satuan barang : ");
    scanf("%f", &HRGBRG);

    JMLBYR = QTY * HRGBRG;


    if (JMLBYR > 600000)
        DISC = 0.20;
    else if (JMLBYR > 400000 && JMLBYR <= 600000)
        DISC = 0.15;
    else if (JMLBYR > 200000 && JMLBYR <= 400000)
        DISC = 0.10;
    else
        DISC = 0;

    BYRAKH = JMLBYR - (JMLBYR * DISC);

    printf("\nJumlah Bayar        : %.2f", JMLBYR);
    printf("\nDiskon              : %.0f%%", DISC * 100);
    printf("\nTotal Bayar Akhir   : %.2f\n", BYRAKH);

    if (DISC == 0)
        printf("Anda tidak mendapatkan diskon.\n");

    return 0;
}
