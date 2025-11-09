#include <stdio.h>

typedef long long ll;

#define P 1000000007
#define MAXN 100001
ll fact[MAXN];
ll power(ll base, ll exp){
    ll res =1;
    base %= P;
    while (exp > 0)
    {
        if(exp & 1){
            res = (res *base) % P;
        }
        base = (base * base ) % P;
    }
    
}
int main()
{

}