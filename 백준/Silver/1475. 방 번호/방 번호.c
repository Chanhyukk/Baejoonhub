#include <stdio.h>

int main() {
    int num;
    int rmd;
    int cnt[10] = {0, };
    int setCount = 0;
    scanf("%d", &num);

    // 0의 개수를 측정하는 부분
    do {
        rmd = num % 10;
        cnt[rmd]++;
        num /= 10;
    } while (num != 0);

    // 가장 많이 나온 숫자의 개수를 찾음
    for (int i = 0; i < 10; i++) {
        if (i == 6 || i == 9) {
            continue; // 6과 9는 같이 사용할 수 있으므로 무시
        }
        if (setCount < cnt[i]) {
            setCount = cnt[i];
        }
    }

    // 6과 9를 합쳐서 처리
    int sixNineSum = cnt[6] + cnt[9];
    if (setCount < (sixNineSum + 1) / 2) {
        setCount = (sixNineSum + 1) / 2;
    }

    printf("%d", setCount);

    return 0;
}
