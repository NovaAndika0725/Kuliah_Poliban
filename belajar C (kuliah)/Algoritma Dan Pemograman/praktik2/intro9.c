#include <stdio.h> // Mengimpor pustaka untuk printf.
#include <conio.h> // Mengimpor pustaka untuk getch.

int main() { // Mendeklarasikan fungsi utama dengan tipe pengembalian int
    int var1 = 25, var2 = 6, hasil; // Mendeklarasikan variabel integer

    hasil = var1 / var2; // Menghitung pembagian integer (asil = 4

    printf("Hasil pembagian = %d\n", hasil); // Mencetak hasil dengan newline
    getch(); // Menunggu input untuk menjaga jendela konsol terbuka
}