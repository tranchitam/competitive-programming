#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>

#define S "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

using namespace std;

void solve(char a[], bool b[], int n, int k, int i, int &c){
    if(c < k){
        for(int j = 0; j < n; j++){
            if(b[j] == false){
                a[i] = S[j];
                if(i == n - 1){
                    c++;
                    for(int ii = 0; ii < n; ii++){
                        printf("%c", a[ii]);
                    }
                    printf("\n");
                }else{
                    b[j] = true;
                    solve(a, b, n, k, i + 1, c);
                    b[j] = false;
                }
            }
        }
    }
}

int main(){
    int t, n, k;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d", &n, &k);
        char a[n];
        bool b[n];
        int c = 0;
        memset(b, false, sizeof b);
        printf("Case %d:\n", i);
        solve(a, b, n, k, 0, c);
    }
}
