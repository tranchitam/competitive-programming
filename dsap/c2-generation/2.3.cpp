#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++){
        a[i] = i + 1;
        printf("%d", a[i]);
    }
    printf("\n");

    for(int i = n - 1; i > 0; i--){
        if(a[i] >= a[i - 1]){
            int j = n - 1;
            while(j >= i && a[j] <= a[i - 1]){
                j--;
            }
            a[i - 1]  = a[i - 1] + a[j];
            a[j] = a[i - 1] - a[j];
            a[i - 1] = a[i - 1] - a[j];

            int s = i;
            int e = n - 1;
            while(s < e){
                a[s] = a[s] + a[e];
                a[e] = a[s] - a[e];
                a[s] = a[s] - a[e];
                s++;
                e--;
            }
            for(int j = 0; j < n; j++){
                printf("%d", a[j]);
            }
            printf("\n");
            i = n;
        }
    }
}
