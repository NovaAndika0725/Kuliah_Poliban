#include <stdio.h>
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int lcm(int a, int b){
    return a * b / gcd(a, b);
}
int main()
{
    int n,a,b;

    scanf("%i %i %i", &a, &b, &n);
    int l = lcm(a,b);
    int sync_count = n /l;
    int first_count = l;
    int total_time = (n / a) + (n / b) - sync_count;

    // total = n / gcd() - lcm(a, b);  
    printf("%i %i %i", sync_count, first_count, total_time);
}