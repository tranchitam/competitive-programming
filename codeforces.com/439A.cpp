#include <cstdio>

int main(){
    int n, d, t;
    scanf("%d %d", &n, &d);
    int s = 0;
    int c = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &t);
        if(i > 0){
            s += 10;
            c += 2;
        }
        s += t;
    }
    int l = d - s;

    if(l < 0){
        printf("-1");
    }else{
        if(l >= 5){
            c += l / 5;
        }
        printf("%d", c);
    }
}
