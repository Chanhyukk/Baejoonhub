#include <stdio.h>

int main() {
    long long n;
    long long num = 1;
    scanf("%lld", &n);
    for (long long i = 0; i < n; i++) {
        num = num * (n - i);
        while (num % 10 == 0) {
            num = num / 10;
        }
        num = num % 1000000000000;
    }
    num = num % 100000;
    int arr[5];
    for (int i = 0; i < 5; i++) {
        arr[4 - i] = num % 10;
        num /= 10;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}