#include <stdio.h>

#define MODULUS 1000000007

int slove()
{
    long long a,b,c;
    
    if(scanf_s("%lld  %lld %lld",&a,&b,&c) != 3){
        return 0;
    }
    long long mod_a = a % MODULUS;
    long long mod_b = b % MODULUS;
    long long mod_c = c % MODULUS;
    long long R1_tamp = (mod_a + mod_b);
    long long R1 = (R1_tamp % MODULUS + mod_c) % MODULUS;
    printf("%lld", R1);
    long long R2_temp = (mod_a * mod_b) % MODULUS;
    long long R2 = (R2_temp * mod_c) % MODULUS;
    printf("%lld", R2);


}
int main()
{
    slove();
    return 0;
}