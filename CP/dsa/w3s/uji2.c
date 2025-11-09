#include <stdio.h>

int main(){
    char *nama[3] = {"nova", "chika","hori"};
    int angka[] = {10,20,30,15,71};
    int bil[] = {2,3,4,5,2,3};
    // int number = 2;
    int i;
    for(i = 0; i <= 3; i++){    
        printf("%10s%d\n", nama[i], angka[i] * bil[i]);
    }
    return 0;   
}