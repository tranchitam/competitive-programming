#include <cstdio>

int main(){
    int n, k, x, R = 0;
    scanf("%d%d%d", &n, &k, &x);
    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n - 1 ; i++){
        if(a[i] == x && a[i + 1] == x){
            bool first = true;
            int r = 0;
            int left = i;
            int right = i + 1;
            int c1 = a[left];
            int c2 = a[right];
            while(c1 == c2 && left >=0 && right < n){
                int add = 0;
                while(left >= 0 && a[left] == c1){
                    left--;
                    add++;
                }
                while(right < n && a[right] == c2){
                    right++;
                    add++;
                }

                if(first == true && add >=2){
                    first = false;
                    r += add;
                }else if(add >= 3){
                    r += add;
                }else{
                    break;
                }
                if(left >= 0 && right < n){
                    c1 = a[left];
                    c2 = a[right];
                }
            }
            R = r > R ? r : R;
        }
    }
    printf("%d", R);
}
