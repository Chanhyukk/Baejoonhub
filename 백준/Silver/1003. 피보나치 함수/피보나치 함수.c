#include <stdio.h>

#define MAX 41

int zero_count[MAX] = {0}; // 0의 호출 횟수
int one_count[MAX] = {0};  // 1의 호출 횟수

void initialize_counts() {
    zero_count[0] = 1; // F(0) 호출 시 0 호출 1회
    zero_count[1] = 0; // F(1) 호출 시 0 호출 0회
    one_count[0] = 0;  // F(0) 호출 시 1 호출 0회
    one_count[1] = 1;  // F(1) 호출 시 1 호출 1회

    for (int i = 2; i < MAX; ++i) {
        zero_count[i] = zero_count[i - 1] + zero_count[i - 2];
        one_count[i] = one_count[i - 1] + one_count[i - 2];
    }
}

int main() {
    int T, N;
    scanf("%d", &T);
    initialize_counts(); // 초기화

    while (T--) {
        scanf("%d", &N);
        printf("%d %d\n", zero_count[N], one_count[N]);
    }

    return 0;
}
