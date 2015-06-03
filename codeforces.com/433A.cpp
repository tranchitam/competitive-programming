#include <cstdio>

int main(){
    int n, v, a = 0, b = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &v);
        if(v == 100){
            a++;
        }else{
            b++;
        }
    }

    int aa = a % 2;
    int bb = b % 2;
    if((aa == 0 && bb == 0) || (aa == 0 && bb == 1 && a >= 2)){
        printf("YES");
    }else{
        printf("NO");
    }
}
