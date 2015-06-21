#include <cstdio>

void collatz(int n){
    if(n == 1){
        printf("%d", n);
    }else if(n % 2 == 0){
        collatz(n / 2);
        printf(" * 2");
    }else{
        collatz(n * 3 + 1);
        printf(" div 3");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    collatz(n);
    printf(" = %d", n);
}
