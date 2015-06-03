#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int r[n], v;
    memset(r, 0, sizeof r);

    for(int i = 0; i < a; i++){
        scanf("%d", &v);
        r[v - 1] = 1;
    }

    for(int i = 0; i < b; i++){
        scanf("%d", &v);
        if(r[v - 1] == 0){
            r[v - 1] = 2;
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", r[i]);
    }
}
