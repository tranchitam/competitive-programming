#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

#define CMAX 1000005
#define MAX 100
using namespace std;

void dijkstra(int c[][MAX], int s, int f, int n, int d[]){
    bool F[n];
    for(int i = 0 ; i < n; i++){
        d[i] = CMAX;
        F[i] = false;
    }
    d[s] = 0;

    while(true){
        int m = CMAX;
        int u = -1;
        for(int i = 0; i < n; i++){
            if(!F[i] && d[i] < m){
                m = d[i];
                u = i;
            }
        }

        if(u == -1 || u == f){
            break;
        }

        F[u] = true;
        for(int v = 0; v < n; v++){
            if(!F[v]){
                d[v] = min(d[v], d[u] + c[u][v]);
            }
        }
    }
}

int main(){
    int t, n, m, u, v, w;
    int c[MAX][MAX];
    int d[MAX];
    scanf("%d", &t);

    for(int ii = 1; ii <= t; ii++){
        scanf("%d %d", &n, &m);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j){
                    c[i][j] = 0;
                }else{
                    c[i][j] = CMAX;
                }
            }
        }

        for(int i = 0; i < m; i++){
            scanf("%d %d %d", &u, &v, &w);
            u--;
            v--;
            if(w < c[u][v]){
                c[u][v] = w;
                c[v][u] = w;
            }
        }
        dijkstra(c, 0, n - 1, n, d);

        printf("Case %d: ", ii);
        if(d[n - 1] == CMAX){
            printf("Impossible\n");
        }else{
            printf("%d\n", d[n - 1]);
        }
    }
}
