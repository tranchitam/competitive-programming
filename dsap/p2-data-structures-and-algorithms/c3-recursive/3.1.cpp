#include <cstdio>

long long int factorial(long long int n){
    if(n == 0){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}

int main(){
    long long int n;
    scanf("%lld", &n);
    printf("%lld", factorial(n));
}
