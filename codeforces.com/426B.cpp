#include <cstdio>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    if(n % 2 != 0){
        printf("%d", n);
    }else{
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &a[i][j]);
            }
        }
        bool isSymmetric = true;
        while(isSymmetric == true && n % 2 == 0){
            for(int i = 0; i < n/2; i++){
                for(int j = 0; j < m; j++){
                    if(a[i][j] != a[n - 1 - i][j]){
                        isSymmetric = false;
                        break;
                    }
                }
            }
            if(isSymmetric){
                n = n / 2;
            }
        }
        printf("%d", n);
    }
}
