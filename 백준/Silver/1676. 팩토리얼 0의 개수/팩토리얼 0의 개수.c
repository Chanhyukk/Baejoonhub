#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int num = 1;
    int check = 0;
    for (int i = 5; n / i >= 1; i *= 5) {
        check += n / i;
    }
    printf("%d\n", check);
    return 0;
}