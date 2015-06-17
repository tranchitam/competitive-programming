#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>

#define MAX 20

using namespace std;

void solve(char s[][MAX], int w, int h, int sx, int sy, int &m){
    if(s[sx][sy] == '@' || s[sx][sy] == '.'){
        s[sx][sy] = '#';
        m++;
        solve(s, w, h, max(sx - 1, 0), sy, m);
        solve(s, w, h, min(sx + 1, h - 1), sy, m);
        solve(s, w, h, sx, max(sy - 1, 0), m);
        solve(s, w, h, sx, min(sy + 1, w - 1), m);
    }
}

int main(){
    int t, w, h;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d", &w, &h);
        char s[h][MAX];
        int sx, sy;
        for(int j = 0; j < h; j++){
            scanf("%s", &s[j]);
            for(int jj = 0; jj < strlen(s[j]); jj++){
                if(s[j][jj] == '@'){
                    sx = j;
                    sy = jj;
                }
            }
        }
        int m = 0;
        solve(s, w, h, sx, sy, m);
        printf("Case %d: %d\n", i, m);
    }
}
