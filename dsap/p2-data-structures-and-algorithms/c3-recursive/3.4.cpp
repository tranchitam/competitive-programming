#include <cstdio>

void move(int n, int x, int y){
    if(n == 1){
        printf("Move 1 disk from column %d to column %d\n", x, y);
    }else{
        move(n - 1, x, 6 - x - y);
        move(1, x, y);
        move(n - 1, 6 - x - y, y);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    move(n, 1, 3);
}
