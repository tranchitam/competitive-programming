#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++){
        a[i] = 0;
        printf("%d", a[i]);
    }
    printf("\n");

    for(int i = n - 1; i >= 0 ; i--){
        if(a[i] == 0){
            a[i] = 1;
            for(int j = 0; j <= i; j++){
                printf("%d", a[j]);
            }
            for(int j = i + 1; j < n; j++){
                a[j] = 0;
                printf("%d", a[j]);
            }
            printf("\n");
            i = n;
        }
    }
}
