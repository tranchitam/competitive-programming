#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vi[3];
    int a[3];
    a[0] = 0;
    a[1] = 0;
    a[2] = 0;
    int n, v;

    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &v);
        v--;
        a[v]++;
        vi[v].push_back(i);
    }

    int m = min(min(a[0], a[1]), a[2]);

    if(m > 0){
        printf("%d\n", m);
        for(int i = 0 ; i < m; i++){
            printf("%d %d %d\n", vi[0][i], vi[1][i], vi[2][i]);
        }
    }else{
        printf("0");
    }
}
