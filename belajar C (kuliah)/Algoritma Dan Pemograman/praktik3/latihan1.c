#include <stdio.h>

int main()
{
    int sum;
    printf("Masukan nilai sum = ");
    scanf_s("%d", &sum);
    printf("%i\n", sum);

    if (sum < 65) {
        printf("Maaf, Anda harus mencoba lagi!");
    }

}