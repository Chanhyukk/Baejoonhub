#include <stdio.h>

int main() {
    int hour, minute, cookTime;
    scanf("%d %d", &hour, &minute);
    scanf("%d", &cookTime);
    minute += cookTime;
    if (minute >= 60) {
        hour += minute / 60;
        minute %= 60;
    }
    if (hour >= 24) {
        hour %= 24;
    }
    printf("%d %d\n", hour, minute);
    return 0;
}
