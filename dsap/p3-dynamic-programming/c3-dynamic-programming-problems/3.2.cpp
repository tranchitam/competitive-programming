#include <cstdio>

/*
5 9
3 4
4 5
5 6
2 3
1 1
*/
int main(){
    int n, M;
    scanf("%d %d", &n, &M);
    int F[n][M + 1];
    int X[n][M + 1];
    int g[n];
    int v[n];

    for(int i = 0; i < n; i++){
        scanf("%d %d", &g[i], &v[i]);
    }

    for(int j = 0; j <= M; j++){
        X[0][j] = j / g[0];
        F[0][j] = X[0][j] * v[0];
        printf("%d %d\t", F[0][j], X[0][j]);
    }
    printf("\n");

    for(int i = 1; i < n; i++){
        for(int j = 0; j <= M; j++){
            X[i][j] = 0;
            F[i][j] = F[i - 1][j - X[i][j] * g[i]] + X[i][j] * v[i];
            for(int k = 1; k <= j / g[i]; k++){
                if(F[i - 1][j - k * g[i]] + k * v[i] > F[i][j]){
                    X[i][j] = k;
                    F[i][j] = F[i - 1][j - k * g[i]] + k * v[i];
                }
            }
            printf("%d %d\t", F[i][j], X[i][j]);
        }
        printf("\n");
    }

    int V = M;
    for(int i = n - 1; i >= 0; i--){
        int k = X[i][V];
        V = V - k * g[i];
        printf("Take %d package %d, V = %d\n", k, i, V);
    }
}
