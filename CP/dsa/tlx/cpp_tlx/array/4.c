#include <stdio.h>
#include <stdbool.h>
int main(){
    bool lampu[101];

    for (int i = 1; i <= 100; i++){
        lampu[i] = false;
    }

    for (int p = 1; p < 10; p++){
        // for(int i = 1; i <= 100; i++){
        //     if(i % p == 0){
        //         lampu[i] = !lampu[i];
        //     }
        // }
        for(int i = 1; i<=100;i+=p){
            lampu[i]=!lampu[i];
        }
    }
    int n = 5;
    for (int s = 1; s <= n; s++){
        for(int k = 1; k <= n - 1; k++){
           printf(" ");
        }
        for (int v = 1; v <= s * 2 - 1; v++){
            printf("@");
        }
        printf("\n");
    }
    int jumlah_menyala = 0;
    for(int i = 1; i <= 100; i++){
        if(lampu[i] == true){
            jumlah_menyala++;
        }
    }
    printf("%i", jumlah_menyala);
}