#include <stdio.h>

int main() {
    int A, B, K;
    scanf("%d %d %d", &A, &B, &K);

    // A를 B로 나눈 나머지를 구함
    int remainder = A % B;

    // K번째 숫자를 찾기 위해 나머지에 10을 K-1번 곱함
    for (int i = 0; i < K - 1; ++i) {
        remainder = (remainder * 10) % B;
    }

    // 결과 출력
    printf("%d", (remainder * 10) / B);

    return 0;
}
