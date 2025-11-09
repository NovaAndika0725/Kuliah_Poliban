#include <stdio.h>

int string(void){
    int kar;
    int jumker = 0, jumspasi = 0;
    printf("Masukan Kalimat, akhiri dengan ENTER.\n\n");
    do
    {
        kar = getchar();
        if (kar == ' ')
            jumspasi = jumspasi + 1;
        else if (kar != '\n' && kar != EOF)
            jumker = jumker + 1;
    } while (kar != '\n' && kar != EOF);
    printf("\nJumlah karakter = %d", jumker);
    printf("\nJumlah SPASI    = %d\n\n", jumspasi);
    return 0;
}

int main()
{
    string();
    return 0;
}