#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char username[20], password[20];
    printf("Masukan username: ");
    scanf_s("%s",&username);
    if(strcmp(username, "admin") == 0){
        printf("Masukan password: ");
        scanf_s("%s", &password);
        if(strcmp(password, "1234") == 0){
            printf("Login Berhasil");
        }else {
            printf("Login Gagal");
        }
    }else {
        printf("Username tidak diketahui");
    }
}