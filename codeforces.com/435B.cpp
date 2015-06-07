#include <cstdio>
#include <cstring>
#include <cmath>

#define MAX_LENGTH 18

int main(){
    char s[MAX_LENGTH];
    int k;
    scanf("%s %d", &s, &k);
    int i = 0;
    int n = strlen(s);

    while(k > 0 && i < n){
        int kk = 0;
        int m = s[i];
        int j = i + 1;
        int mm = j;
        while(j < n && kk < k){
            if(s[j] > m){
                mm = j;
                m = s[j];
            }
            kk++;
            j++;
        }

        if(m > s[i]){
            k = k - (mm - i);
            for(int jj = mm; jj > i; jj--){
                s[jj] = s[jj - 1];
            }
            s[i] = m;
        }
        i++;
    }
    printf("%s", s);
}
