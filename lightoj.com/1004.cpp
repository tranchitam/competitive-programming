#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int t, n;
    scanf("%d", &t);
    for(int ii = 1; ii <= t; ii++){
        scanf("%d", &n);
        long long int a[2 * n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                scanf("%lld", &a[i][j]);
                if(i > 0){
                    long long int m = a[i - 1][max(0, j - 1)];
                    for(int k = max(0, j - 1) + 1; k <= min(j, i - 1); k++){
                        if(m < a[i - 1][k]){
                            m = a[i - 1][k];
                        }
                    }
                    a[i][j] += m;
                }
            }
        }

        for(int i = n; i < 2*n - 1; i++){
            for(int j = 0; j < 2*n - 1 - i; j++){
                scanf("%lld", &a[i][j]);
                long long int m = a[i - 1][j] > a[i - 1][j + 1] ? a[i - 1][j] : a[i - 1][j + 1];
                a[i][j] += m;
            }
        }
        printf("Case %d: %lld\n", ii, a[2 * n - 2][0]);
    }
}
