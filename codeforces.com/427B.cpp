#include <cstdio>

int main(){
    int n, t, c, a, r = 0, k = 0;
    scanf("%d%d%d", &n, &t, &c);
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        if(a <= t){
            k++;
        }else{
            if(k >= c){
                r = r + k - c + 1;
            }
            k = 0;
        }
    }

    if(k >= c){
        r = r + k - c + 1;
    }

    printf("%d", r);
}
