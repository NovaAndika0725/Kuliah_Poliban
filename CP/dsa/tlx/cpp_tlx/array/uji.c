#include <stdio.h>

int main() {
    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };
    int harga_jual[3] = {100, 120, 150};
    int ii = 4;
    int jj = 3;
    long long total = 0;  // Gunakan long long karena hasilnya besar
    
    for(int i = 0; i < ii ; i++){
        for(int j = 0; j < jj; j++){
            total += luas[i][j] * harga_jual[j];  // Kalikan dengan harga_jual[j]
        }
    }
    
   printf("%lld", total);
}