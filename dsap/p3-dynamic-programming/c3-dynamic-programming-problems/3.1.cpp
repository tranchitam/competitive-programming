#include <cstdio>
#include <cmath>
#define MIN -99999999
#define MAX 99999999

/*
10
5 2 3 4 9 10 5 6 7 8
*/
int main(){
    int n;
    scanf("%d", &n);
    int a[n + 2];
    a[0] = MIN;
    a[n + 1] = MAX;
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    int t[n];
    int L[n + 2];
    L[n + 1] = 1;
    for(int i = n ; i >=0; i--){
        int jmax = n + 1;
        for(int j = i + 1; j <= n + 1; j++){
            if(a[j] > a[i] && L[j] > L[jmax]){
                jmax = j;
            }
        }
        L[i] = L[jmax] + 1;
        t[i] = jmax;
    }
    int i = t[0];
    printf("%d\n", L[0] - 2);
    while(i != (n + 1)){
        printf("a[%d] = %d\n", i - 1, a[i]);
        i = t[i];
    }
}
