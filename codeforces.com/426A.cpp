#include <cstdio>

int main(){
    int n, s, a, r = 0, m = 0;
    scanf("%d%d", &n, &s);
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        r += a;
        if(a > m){
            m = a;
        }
    }
    r -= m;

    if(r <= s){
        printf("YES");
    }else{
        printf("NO");
    }
}
