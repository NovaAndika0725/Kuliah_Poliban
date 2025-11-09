#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n){
    if(n <= 1)return false;
    if(n == 2)return true;
    if(n % 2 == 0)return false;
    for(int i = 3; i*i <= n; i += 2){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    scanf_s("%i", &n);
    printf("%s\n", isPrime(n) ? "YA" : "TIDAK");
    return 0;
}
