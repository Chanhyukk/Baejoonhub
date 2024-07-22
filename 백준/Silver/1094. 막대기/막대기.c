#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int j, k= 0;
    while(x>0){
        j = x % 2;
        x /= 2;
        if( j == 1){
            k++;
        }
    }
    printf("%d", k);
    return 0;
}
