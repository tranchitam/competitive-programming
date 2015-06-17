#include <cstdio>

int main(){
    int t, n, r, v;
    scanf("%d", &t);
    char s[1];
    for(int i = 1; i <= t; i++){
        gets(s);
        scanf("%d", &n);
        r = 0;
        for(int j = 0; j < n; j++){
            scanf("%d", &v);
            if(v > 0){
                r += v;
            }
        }
        printf("Case %d: %d\n", i, r);
    }
}
