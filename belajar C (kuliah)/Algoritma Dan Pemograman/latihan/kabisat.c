#include <stdio.h>

int main()
{
    int tahun;
    printf("Masukan tahun: ");
    scanf_s("%i", &tahun);

    if(tahun % 4 == 0){
        if(tahun % 100 == 0){
            if(tahun % 400 == 0){
                printf("%i Ini adalah tahun kabisat", tahun);
            }else {
                printf("%i Ini Bukan tahun kabisat", tahun);
            }
        }else {
            printf("%i ini adalah tahun kabisat", tahun);
        }
    }else {
        printf("%i ini bukan tahun kabisat", tahun);
    }
}