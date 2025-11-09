#include <stdio.h>
// #include <stdlib.h>

int main()
{
    int N;
    if(scanf("%i", &N) != 1) return 0;
    const int V = 100000;
    static int freq[100001] = {0};;
    for(int i = 0; i <= N; i++){
        int x; scanf("%d", &x);
        if(x >= 1 && x <= V) freq[x]++;

    }

    long long ans = 0;
    for (int u = 1; u <= V;++u){
        if (freq[u] == 0) continue;
        for(int v = u + u; v <= 100000; v += u){
            if(freq[v] == 0) continue;
            int x = u ^ v;
            if (v < x) {
                ans += (long long) freq[u] * freq[x];
            }
        }
    }
    printf("%lld\n", ans);
    return 0;
}