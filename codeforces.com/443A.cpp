#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>

#define MAX 127
#define MAX_LENGTH 1000

using namespace std;

int main(){
    char s[MAX_LENGTH];
    bool b[MAX];
    memset(b, false, sizeof b);
    gets(s);
    int l = strlen(s);
    int i = 0;
    int k = 0;
    while(i < l){
        if(s[i] == '{' || s[i] == '}'){
            i++;
        }else if(s[i] == ','){
            i+=2;
        }else{
            if(!b[s[i]]){
                b[s[i]] = true;
                k++;
            }
            i++;
        }
    }
    printf("%d", k);
}
