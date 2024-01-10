#include <stdio.h>

long long fac(int x) {
    if (x < 2) {
        return 1;
    }
    else {
        return x * fac(x - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", fac(n));
    return 0;
}