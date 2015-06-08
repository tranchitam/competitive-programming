#include <cstdio>

#define M 10000007

int main(){
    long long int t, n;
    scanf("%lld", &t);
    long long int a[10001];

    for(int i = 1; i <= t; i++){
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &n);
        for(int i = 0; i <= 5; i++){
            a[i] = a[i] % M;
        }
        for(int j = 6; j <= n; j++){
            a[j] = (a[j - 6] + a[j - 5] + a[j - 4] + a[j - 3] + a[j - 2] + a[j - 1]) % M;
        }
        printf("Case %d: %lld\n", i, a[n]);
    }
}
