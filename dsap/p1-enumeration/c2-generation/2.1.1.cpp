#include <cstdio>

int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int a[k];

    for(int i = 0; i < k; i++){
        a[i] = i + 1;
        printf("%d", a[i]);
    }
    printf("\n");

    for(int i = k - 1; i >= 0; i--){
        if(a[i] < (n - k + i + 1)){
            a[i]++;
            for(int j = 0; j <= i; j++){
                printf("%d", a[j]);
            }
            for(int j = i + 1; j < k; j++){
                a[j] = a[j - 1] + 1;
                printf("%d", a[j]);
            }
            printf("\n");
            i = k;
        }
    }


}
