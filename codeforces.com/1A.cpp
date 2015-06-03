#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    long long int n, m, a;
    cin >> n >> m >> a;
    long long int nn = n / a;
    long long int mm = m / a;
    nn = (n % a != 0) ? nn + 1 : nn;
    mm = (m % a != 0) ? mm + 1 : mm;
    printf("%lld", nn * mm);
}
