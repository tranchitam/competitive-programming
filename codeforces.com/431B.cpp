#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>

#define N 5
using namespace std;

void solve(int x[],bool b[], int a[][N], int i, int m[]){
    for(int j = 0 ; j < N; j++){
        if(b[j] == false){
            x[i] = j;
            if(i == N - 1){
                m[0] = max(m[0], a[x[0]][x[1]] + a[x[1]][x[0]] + a[x[2]][x[3]] + a[x[3]][x[2]] + a[x[1]][x[2]] + a[x[2]][x[1]] + a[x[3]][x[4]] + a[x[4]][x[3]] + a[x[2]][x[3]] + a[x[3]][x[2]] + a[x[3]][x[4]] + a[x[4]][x[3]]);
            }else{
                b[j] = true;
                solve(x, b, a, i + 1, m);
                b[j] = false;
            }
        }
    }
}

int main(){
    int a[N][N];
    int x[N];
    bool b[N];
    memset(b, false, sizeof(b));
    int m[1];
    m[0] = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &a[i][j]);
        }
    }
    solve(x, b, a, 0, m);
    printf("%d", m[0]);
}
