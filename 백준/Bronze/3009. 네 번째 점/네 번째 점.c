#include <stdio.h>

int main() {
    int a1, a2, b1, b2, c1, c2, d1, d2;
    scanf("%d %d", &a1, &a2);
    scanf("%d %d", &b1, &b2);
    scanf("%d %d", &c1, &c2);
    if (a1 == b1) {
        d1 = c1;
    }
    else if (b1 == c1) {
        d1 = a1;
    }
    else {
        d1 = b1;
    }
    if (a2 == b2) {
        d2 = c2;
    }
    else if (b2 == c2) {
        d2 = a2;
    }
    else {
        d2 = b2;
    }
    printf("%d %d\n", d1, d2);

    return 0;
}