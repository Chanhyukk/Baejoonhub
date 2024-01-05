#include <stdio.h>

int main() {
    int num, temp;
    scanf("%d %d", &num, &temp);
    int arr[num];
    int len = 0;
    for (int i = 1; i < num + 1; i++) {
        if (num % i == 0) {
            arr[len] = i;
            len++;
        }
    }
    if (temp > len) {
        printf("0\n");
    }
    else {
        printf("%d\n", arr[temp - 1]);
    }
    return 0;
}
