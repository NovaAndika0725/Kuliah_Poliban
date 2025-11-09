#include <stdio.h>

int main()
{
    int n;
    scanf_s("%i", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j == 1 || j == n - i + 1){
                printf("*");
            }else {
                printf(".");
            }
        }
        printf("\n");
    }
}