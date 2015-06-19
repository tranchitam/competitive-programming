#include <cstdio>
#include <iostream>
#include <set>
#include <cmath>
#include <cstring>

#define MAX 500

using namespace std;

void solve(char s[][MAX], int m, int n, int x, int y, set<pair<int, int> > &v, int &c){
    if(s[x][y] == '.' || s[x][y] == 'C'){
        if(s[x][y] == 'C'){
            c++;
        }
        s[x][y] = '#';
        pair<int, int> p(x, y);
        v.insert(p);
        solve(s, m, n, max(0, x - 1), y, v, c);
        solve(s, m, n, min(x + 1, m - 1), y, v, c);
        solve(s, m, n, x, max(0, y - 1), v, c);
        solve(s, m, n, x, min(y + 1, n - 1), v, c);
    }
}

int main(){
    int t, m, n, q, x, y;
    scanf("%d", &t);
    char s[MAX][MAX];
    for(int ii = 1; ii <= t; ii++){
        scanf("%d %d %d", &m, &n, &q);
        for(int i = 0; i < m; i++){
            scanf("%s", &s[i]);
        }
        int a[m][n];
        for(int i = 0 ; i < m; i++){
            for(int j = 0; j < n; j++){
                a[i][j] = 0;
            }
        }
        printf("Case %d:\n", ii);
        for(int i = 0; i < q; i++){
            scanf("%d %d", &x, &y);
            x--; y--;
            pair<int, int> p(x, y);
            set<pair<int, int> > v;
            int c = 0;
            solve(s, m, n, x, y, v, c);
            for(set<pair<int, int> >::iterator it = v.begin(); it != v.end(); it++){
                a[it -> first][it -> second] = c;
            }
            printf("%d\n", a[x][y]);
        }
    }
}
