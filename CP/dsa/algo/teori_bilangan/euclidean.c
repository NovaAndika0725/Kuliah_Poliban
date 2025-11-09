#include <stdio.h>
long long gcd(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main(){
    gcd(3, 4);
    int n = 10;
    for (int  i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if(j == i || j == n - 1 - i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");   
    }
    

}