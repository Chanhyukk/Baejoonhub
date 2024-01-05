#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    int count = 0;
    for (int i = 0; i < m; i++) {
        int n;
        scanf("%d", &n);
        int check = 1;
        if (n == 0 || n == 1) {
            check = 0;
        }
        for (int j = 2; j * j <= n; j++) {
            if (n % j == 0) {
                check = 0;
                break;
            }
        }
        if (check == 1) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
