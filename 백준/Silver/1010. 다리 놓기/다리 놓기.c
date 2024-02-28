#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        int n, m;
        scanf("%d %d", &n, &m);
        int num = 1;
        for (int j = 0; j < n; j++) {
            num *= (m - j);
            num /= (j + 1);
        }
        printf("%d\n", num);
    }
    return 0;
}
