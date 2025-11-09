#include <stdio.h>

#define P 1000000007
#define MAXN 100001
long long fact[MAXN];
long long power(long long base, long long exp){
    long long res = 1;
    base %= P;
    while(exp > 0){
        if(exp & 1){
            res = (res * base) % P;
        }
        base = (base * base) % P;
        exp >>= 1;
    }
    return res;

}

long long modInvers(long long n){
    return power(n, P - 2);
}

long long nCr_mod_p(int n, int k){
    if(k < 0 || k > n){
        return 0;
    }
    if(k == 0 || k == n){
        return 1;
    }
    
    long long numerator = fact[n];
    long long k_fact = fact[k];
    long long nk_fact = fact[n - k];

    long long inv_k_fact = modInvers(k_fact);
    long long inv_nk_fact = modInvers(nk_fact);
    long long result = (numerator * inv_k_fact) % P;
    result = (result * inv_nk_fact) % P;
    return result;
}
void slove()
{
    int n,k;
    if(scanf_s("%i %i", &n, &k)  != 2){
        return;
    }
    fact[0] = 1;
    for (int i = 1; i <= n; i++){
        fact[i] = (fact[i-1] * i) % P;

    }

    long long result = nCr_mod_p(n, k);
    printf("%lld", result);
}
int main(){
    slove();
    return 0;
}