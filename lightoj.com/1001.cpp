#include <cstdio>

int main(){
    int n, a;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        printf("%d %d\n", a / 2, a - a / 2);
    }
}
