#include <cstdio>

int main(){
    int n, m, a, c = 0, s = 0;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        if(s + a <= m){
            s += a;
        }else{
            s = a;
            c++;
        }
    }
    if(s > 0){
        c++;
    }
    printf("%d", c);
}
