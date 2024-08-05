#include <stdio.h>

void starFun(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int temp = n - i - 1;
            if (j < temp) {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    starFun(num);
    return 0;
}