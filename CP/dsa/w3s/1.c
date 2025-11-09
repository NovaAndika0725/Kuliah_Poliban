#include <stdio.h>

int main()
{
    long long A[500000];
    int n;
    scanf("%i", &n);

    for(int i = 0; i < n; i++){
        scanf("%lld", &A[i]);
    }
    for(int i = n - 1; i >= 0; i--){
        printf("%lld\n", A[i]);
    }
    return 0;
}