#include <cstdio>

int main(){
    int n, k, a, r = 0;
    scanf("%d%d", &n, &k);
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        if(a + k <= 5){
            r++;
        }
    }
    printf("%d", r/3);
}
