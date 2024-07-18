#include "stdio.h"

int binary(int n) {
    int digit = 10;
    int sum = 0;
    while (n != 0) {
        sum += n % 2;
        sum *= digit;
        n /= 2;
    }
    return sum;
}

int oneCount(int n) {
    int count = 0;
    while(n != 0) {
        if (n % 10 == 1) {
            count++;
        }
        n /= 10;
    }
    return count;
}

int main() {
    int x;
    scanf("%d", &x);
    int bin = binary(x);
    printf("%d\n", oneCount(bin));
    return 0;
}
