#include <cstdio>
#include <cmath>

int main(){
    int t;
    scanf("%d", &t);
    long long int s;
    for(int i = 1; i <= t; i++){
        scanf("%lld", &s);
        long long int d = ceil(sqrt(s));
        long long int cd = (d - 1) * (d - 1) + d;
        long long int r;
        long long int c;
        if(d % 2 == 1){
            if(s >= cd){
                r = d;
                c = d - (s - cd);
            }else{
                c = d;
                r = d - (cd - s);
            }
        }else{
            if(s >= cd){
                c = d;
                r = d - (s - cd);
            }else{
                r = d;
                c = d - (cd - s);
            }
        }
        printf("Case %d: %lld %lld\n", i, c, r);
    }
}
