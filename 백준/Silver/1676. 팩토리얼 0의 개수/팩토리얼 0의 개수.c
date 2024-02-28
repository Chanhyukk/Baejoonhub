#include <stdio.h>

int countTrailingZeros(int n) {
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int result = countTrailingZeros(n);

    printf("%d\n", result);
    return 0;
}
