#include <stdio.h>

int hitung_pangkat(int basis, int pangkat)
{
    int hasil;
    if(pangkat == 0){
        return 1;
    }
    for(int i = 0;  i < pangkat; i++){
        hasil *= basis;
    }
    return hasil;
}
int main()
{
    printf("%d", hitung_pangkat(3,3));
}