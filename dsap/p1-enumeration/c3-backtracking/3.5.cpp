#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

#define MAX_LENGTH 99999

void solve(int x[], bool a[], bool b[], bool c[], int i, int n){
    for(int j = 0; j < n; j++){
        if(a[j] && b[i + j] && c[i - j + n - 1]){
            x[i] = j;
            if(i == n - 1){
                bool r[n][n];
                for(int u = 0; u < n; u++){
                    for(int v = 0; v < n; v++){
                        r[u][v] = false;
                    }
                }
                for(int u = 0; u < n; u++){
                    r[u][x[u]] = true;
                }

                for(int ii = 0; ii < n ; ii++){
                    for(int jj = 0; jj < n; jj++){
                        if(r[ii][jj]){
                            printf("O");
                        }else{
                            printf("X");
                        }
                    }
                    printf("\n");
                }
                printf("\n");
            }else{
                a[j] = false; b[i + j] = false; c[i - j + n - 1] = false;
                solve(x, a, b, c, i + 1, n);
                a[j] = true; b[i + j]= true; c[i - j + n - 1] = true;
            }
        }
    }
}

int main(){
    int n, i, j;
    scanf("%d", &n);
    int x[n];
    bool a[n];
    bool b[2*n - 2 + 2];
    bool c[2*n - 2 + 2]; // (n - 1) - (1 - n)

    memset(a, true, sizeof a);
    memset(b, true, sizeof b);
    memset(c, true, sizeof c);
    solve(x, a, b, c, 0, n);
}
