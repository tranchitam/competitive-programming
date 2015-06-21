#include <cstdio>

void solve(int a[], int i, int n){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n - 1){
            for(int jj = 0; jj < n; jj++){
                printf("%d", a[jj]);
            }
            printf("\n");
        }else{
            solve(a, i + 1, n);
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    solve(a, 0, n);
}
