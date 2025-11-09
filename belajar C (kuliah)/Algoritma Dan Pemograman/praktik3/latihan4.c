#include <stdio.h>

int main()
{
    int flag,exit_flag;
    char letter;
    printf("Masukan NIlai flag ");
    scanf_s("%i", &flag);
    printf("Masukan NIlai letter ");
    scanf_s("%s", &letter);

    if(flag == 1 || letter != 'X'){
        exit_flag = 0;
        printf("assign %i",exit_flag);
    }else {
        exit_flag = 1;
        printf("set %i",exit_flag);
    }

}