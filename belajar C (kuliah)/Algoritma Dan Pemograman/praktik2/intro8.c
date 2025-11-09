#include <stdio.h> 

int main() {
    
    char *namaBarang[3] = {"CPU 850Mhz", "RAM 128 Mhz", "Motherboard PIII"};
    
    float harga[3] = {700000.00, 380000.00, 800000.00};
    
    float diskon[3] = {0.05, 0.10, 0.08}; 

    printf("No\tNama Barang\t\tHarga\t\tDiskon\tJumlah\n");
    
    printf("---------------------------------------------------------------\n"); 

    for (int i = 0; i < 3; i++) {
        float jumlah = harga[i] - (harga[i] * diskon[i]);
        
        printf("%d\t%-16s\t%.2f\t%.0f%%\t%.2f\n",
               i + 1, namaBarang[i], harga[i], diskon[i] * 100, jumlah); 
    }

}