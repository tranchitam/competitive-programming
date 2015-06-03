#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long int n, x;
    cin >> n >> x;
    long long int a[n];
    long long int s = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i = 0; i < n; i++){
        s += x * a[i];
        x = x > 1 ? (x - 1) : x;
    }
    cout << s;
}
