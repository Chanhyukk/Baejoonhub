#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int min_distance = min(min(x, w - x), min(y, h - y));
    printf("%d\n", min_distance);

    return 0;
}
