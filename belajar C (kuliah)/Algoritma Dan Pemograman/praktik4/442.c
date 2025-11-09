#include <stdio.h>

int main()
{
    char karakter;

    printf("Masukan satu Karakter: ");
    scanf("%s", &karakter);

    if (karakter >= 'a' && karakter <= 'z') {
        printf("Karakter tersebut adalah huruf kecil.\n");
    } else if (karakter >= 'A' && karakter <= 'Z') {
        printf("Karakter tersebut adalah huruf besar.\n");
    } else if (karakter >= '0' && karakter <= '9') {
        printf("Karakter tersebut adalah angka.\n");
    } else {
        printf("Karakter tersebut adalah karakter khusus.\n");
    }
    return 0;
}