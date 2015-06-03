#include <cstdio>
#include <cstring>

int main(){
    int a[4];
    char s[100001];
    scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]);
    getchar();
    scanf("%s", &s);

    int r = 0, len = strlen(s);
    for(int i = 0; i < len; i++){
        r += a[s[i] - 48 - 1];
    }
    printf("%d", r);
}
