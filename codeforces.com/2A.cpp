#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>

#define N 32
using namespace std;

class Pair{
    public:
        string name;
        int score;
        Pair(){
            name = "";
            score = 0;
        }
        Pair(string n, int s){
            name = n;
            score = s;
        }

    bool operator == (const Pair &p) const{
        return name == p.name && score == p.score;
    }
};

int main(){
    int n, d;
    char s[N];
    scanf("%d", &n);
    map<int, Pair> m;
    map<string, int> mm;

    for(int i = 0; i < n; i++){
        scanf("%s %d", &s, &d);
        string name(s);
        mm[name] = mm[name] + d;
        m[i] = Pair(name, mm[name]);
    }

    int md = 0;

    for(map<string, int>::iterator it = mm.begin(); it != mm.end(); it++){
        if(it -> second > md){
            md = it -> second;
        }
    }

    for(map<int, Pair>::iterator it = m.begin(); it!= m.end(); it++){
        Pair p = it -> second;
        if(p.score >= md && mm[p.name] == md){
            printf("%s", p.name.c_str());
            break;
        }
    }
}
