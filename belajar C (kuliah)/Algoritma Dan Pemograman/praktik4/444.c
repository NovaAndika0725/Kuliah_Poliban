#include <stdio.h>
int main() {
    int tahun;
    printf("Masukkan tahun: ");
    scanf("%d", &tahun);
    if (tahun % 400 == 0) {
        printf("Tahun %d adalah tahun kabisat.", tahun);
    } else if (tahun % 100 == 0) {
        printf("Tahun %d bukan tahun kabisat.", tahun);
    } else if (tahun % 4 == 0) {
        printf("Tahun %d adalah tahun kabisat.", tahun);
    } else {
        printf("Tahun %d bukan tahun kabisat.", tahun);
    }
    return 0;
}