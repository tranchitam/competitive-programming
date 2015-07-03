#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>

#define MAX 999999
#define MAX_CITY 100

using namespace std;

/*
4 6
1 2 3
1 3 2
1 4 1
2 3 1
2 4 2
3 4 4
*/

void solve(int c[][MAX_CITY], int x[], int t[], bool f[], int i, int n, int &s, int xx[]){
    for(int j = 1; j < n; j++){
        if(!f[j]){
            x[i] = j;
            t[i] = t[i - 1] + c[x[i - 1]][j];
            if(t[i] < s){
                if(i == n - 1){
                    if(t[n - 1] + c[x[n - 1]][0] < s){
                        s = t[n - 1] + c[x[n - 1]][0];
                        for(int ii = 0; ii < n; ii++){
                            xx[ii] = x[ii];
                        }
                    }
                }else{
                    f[j] = true;
                    solve(c, x, t, f, i + 1, n, s, xx);
                    f[j] = false;
                }
            }
        }
    }
}

int main(){
    int n, m, ii, jj, v;
    scanf("%d %d", &n, &m);
    int c[n][MAX_CITY];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                c[i][j] = 0;
            }else{
                c[i][j] = MAX;
            }
        }
    }

    for(int i = 0 ; i < m; i++){
        scanf("%d %d %d", &ii, &jj, &v);
        ii--;
        jj--;
        c[ii][jj] = v;
        c[jj][ii] = v;
    }

    int x[n + 1];
    int xx[n + 1];
    int t[n + 1];
    bool f[n];
    memset(f, false, sizeof f);

    x[0] = 0;
    t[0] = 0;
    f[0] = true;
    int s = MAX;
    solve(c, x, t, f, 1, n, s, xx);
    printf("Cost: %d\n", s);
    printf("Path: ");
    for(int i = 0; i < n; i++){
        printf("%d -> ", xx[i] + 1);
    }
    printf("%d", 1);
    printf("\n");
}
