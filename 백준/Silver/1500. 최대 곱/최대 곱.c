#include <stdio.h>
#define MAX 9223372036854775806

int main() {
    int s, k;
    scanf("%d %d", &s, &k);
    long long int arr[k];
    for (int i = 0; i < k; i++) {
        arr[i] = s / k;
    }
    long long int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }
    for (int i = 0; i < k; i++) {
        if (sum < s) {
            sum++;
            arr[i]++;
        }
        else if (sum == s) {
            break;
        }
    }
    long long int multi = 1;
    for (int i = 0; i < k; i++) {
        multi *= arr[i];
    }
    if (multi < MAX ) {
        printf("%lld\n", multi);
    }
    else {
        printf("9223372036854775806");
    }
    return 0;
}
