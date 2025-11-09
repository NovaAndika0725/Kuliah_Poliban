#include <stdio.h>    // Header standar untuk fungsi input-output printf, scanf, dll
#include <conio.h>    // Header khusus untuk getch() 
#include <stdlib.h>   // Header standar, dipakai untuk system("cls")

int main()   // Fungsi utama program.
{
    float harga, jumlah, total, hasil;  // Deklarasi variabel bertipe float bilangan pecahan/desimal.

    system("cls");  // Membersihkan layar console (pengganti clrscr() di Turbo C).

    harga = 132.055;  // Memberikan nilai 132.055 ke variabel harga.

    jumlah = 50;  // Memberikan nilai 50 ke variabel jumlah.

    total = harga * jumlah;  // Menghitung total harga: 132.055 * 50 = 6602.75
    // Disimpan di variabel total.

    hasil = total / jumlah;  // Menghitung pembagian: 6602.75 / 50 = 132.055
    // Disimpan di variabel hasil.

    printf("Harga Total = %c\n\n", total);  
    // Menampilkan teks "Harga Total = ..." ke layar.
    // %c digunakan untuk menampilkan charakter.
    // \n\n membuat 2 baris kosong setelahnya.

    printf("Hasil Pembagian = %d", hasil);  
    // Menampilkan teks "Hasil Pembagian = ..." ke layar.
    // %d menampilkan nilai integer.

    getch();  // Menunggu user menekan tombol sebelum program ditutup.

}

