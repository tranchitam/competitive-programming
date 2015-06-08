#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;

void solve(int a[], bool b[], int i, int k, int n){
    for(int j = 0; j < n; j++){
        if(!b[j]){
            a[i] = j;
            if(i == k - 1){
                for(int jj = 0; jj < k; jj++){
                    printf("%d", a[jj] + 1);
                }
                printf("\n");
            }else{
                b[j] = true;
                solve(a, b, i + 1, k, n);
                b[j] = false;
            }
        }
    }
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int a[k];
    bool b[n];
    memset(b, false, sizeof b);
    solve(a, b, 0, k, n);
}
