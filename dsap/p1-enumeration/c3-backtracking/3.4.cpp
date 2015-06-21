#include <cstdio>

#define MAX 100

void solve(int x[], int t[], int i, int n){
    for(int j = x[i - 1]; j <= (n - t[i - 1])/2; j++){
        x[i] = j;
        t[i] = t[i - 1] + x[i];
        solve(x, t, i + 1, n);
        x[i] = n - t[i - 1];
        printf("%d = ", n);
        for(int ii = 1; ii <= i; ii++ ){
            if(ii == 1){
                printf("%d", x[ii]);
            }else{
                printf(" + %d", x[ii]);
            }
        }
        printf("\n");
    }

}
int main(){
    int n;
    scanf("%d", &n);
    int t[MAX];
    int x[MAX];
    t[0] = 0;
    x[0] = 1;
    solve(x, t, 1, n);
}
