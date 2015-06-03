#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>

#define N 100001
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int x[n], y[n], a[N], b[N];
    memset(a, 0, sizeof a);
    memset(b, 0, sizeof b);

    for(int i = 0; i < n; i++){
        scanf("%d%d", &x[i], &y[i]);
        a[x[i]]++;
        b[y[i]]++;
    }

    int total = 2 * (n - 1);

    for(int i = 0; i < n; i++){
        int host = n - 1 + a[y[i]];
        int guest = total - host;
        printf("%d %d\n", host, guest);
    }
}
