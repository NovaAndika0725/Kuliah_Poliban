#include <stdio.h>

int main()
{
    int n;
    printf("Masukan Nilai Rapor:");
    scanf_s("%i", &n);

    if(n >= 0 && n <= 100){
        if(n >= 80){
            printf("Nilai Anda A");
        }else if (n >= 70) {
            printf("Nilai Anda B");
        }else if (n >= 60) {
            printf("Nilai Anda C");

        }else if (n >= 50) {
            printf("Nilai Anda D");
        }else {
            printf("Nilai Anda E\n");
            if (n <= 40) {
                printf("Anda perlu Remedial!\n");
            }
        }
    }else {
        printf("Nilai Anda Tidak valid! harus antara 0 -- 100.\n ");
    }
}