#include <stdio.h>   // Header file standar input-output, berisi fungsi seperti printf()
#include <conio.h>   // Header file console input-output, berisi fungsi seperti getch()

int main()   // Fungsi utama, tempat program C dieksekusi pertama kali
{
    printf("Assalamualaikum!\n");  
    // printf digunakan untuk menampilkan teks ke layar.
    // "\n" artinya newline (pindah ke baris baru).
    
    printf("Sesuatu yang menyenangkan adalah pemrograman, \n");  
    // Menampilkan kalimat, lalu berpindah ke baris baru.
    
    printf("Dan pemrograman C adalah yang lebih menyenangkan, \n");  
    // Menampilkan kalimat lain, lalu lanjut ke baris baru.
    
    printf("Testing…\n..1\n..2\n..3\n");  // Menampilkan kata "Testing…" lalu baris baru.
    // "..1" ditampilkan, lalu baris baru lagi.
    // "..2" ditampilkan, lalu baris baru lagi.
    // "..3" ditampilkan, lalu baris baru lagi.
    
    getch();   // Biasanya dipakai agar jendela console tidak langsung menutup.
}
