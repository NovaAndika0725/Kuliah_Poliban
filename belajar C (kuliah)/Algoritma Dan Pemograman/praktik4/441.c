#include <stdio.h>

int main()
{
    int bilangan;
    printf("Masukan Bilangan ");
    scanf("%d", &bilangan);

    if(bilangan % 2 == 0){
        printf("%i Bilangan genap\n ", bilangan);
    }else {
        printf("%i Bilangan ganjil", bilangan);
    }
    return 0;
}