#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int min_x = 10001;
    int min_y = 10001;
    int max_x = -10001;
    int max_y = -10001;
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x > max_x) {
            max_x = x;
        }
        if (y > max_y) {
            max_y = y;
        }
        if (x < min_x) {
            min_x = x;
        }
        if ( y < min_y) {
            min_y = y;
        }
    }
    if (n < 2) {
        printf("%d\n", 0);
    }
    else {
        int xx = max_x - min_x;
        int yy = max_y - min_y;
        int ext = xx * yy;

        printf("%d\n", ext);

    }
    return 0;
}
