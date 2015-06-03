#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    int a;
    int s = 0;
    int c = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        s += a;
        if(s < 0){
            c++;
            s = 0;
        }
    }
    printf("%d", c);
}
