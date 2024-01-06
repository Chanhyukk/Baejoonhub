#include <stdio.h>

int main() {
    while (1) {
        int n;
        scanf("%d", &n);
        if (n == -1) {
            break;
        }
        int sum = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        if (sum == n) {
            printf("%d = %d", n, 1);
            for (int i = 2; i < n; i++) {
                if (n % i == 0) {
                    printf(" + %d", i);
                }
            }
            printf("\n");
        }
        else {
            printf("%d is NOT perfect.\n", n);
        }
    }
    return 0;
}
