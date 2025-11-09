#include <stdio.h>    
#include <conio.h>
#include <stdlib.h> 

int main()
{
    char karakter;  

    system("cls");

    printf("\n Mempelajari penggunaan getche() dengan variabel");

    printf("\n Tekan tombol yang dikehendaki"); 

    karakter = getch();

    printf("\n Anda menekan tombol %d", karakter); 


    getch();
}
