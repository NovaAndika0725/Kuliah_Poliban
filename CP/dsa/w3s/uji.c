#include <stdio.h>

int main(){
    // char o = '*';
    int number;
    printf("%d", number);
    scanf("%d", &number);
    int i;
    for(i = 1; i <= 64; i++){    
        printf("%d X %d = %d\n", number, i, number * i);
    }
    
}
