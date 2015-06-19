#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

long long int p10(int n){
    long long int k = 1;
    for(int i = 0; i < n; i++){
        k *= 10;
    }
    return k;
}

int main(){
    int n;
    scanf("%d", &n);
    int d = (int)log10(n);
    long long int p = (d + 1) * (n - p10(d) + 1);
    for(int i = 1; i <= d; i++){
        p += i * 9 * p10(i - 1);
    }
    cout << p;
}
