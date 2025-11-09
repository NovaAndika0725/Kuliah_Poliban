#include <stdio.h>

int douji(int n){
    printf_s("masukan nilai N");
    scanf("%i", &n);
    do {
        printf("%i\n", n);
        n = n / 2;
    }while (n <= 10);
}


int main()
{
    int n;
    douji(n);
}