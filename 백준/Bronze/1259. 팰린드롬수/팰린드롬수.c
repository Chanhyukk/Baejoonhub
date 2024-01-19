#include <stdio.h>

int main() {
    while (1) {
        int n;
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        int numDigits = 0;
        int temp = n;
        while (temp != 0) {
            temp /= 10;
            numDigits++;
        }
        int arr[numDigits];
        int i = 0;
        temp = n; // temp를 다시 n으로 초기화
        while (temp != 0) {
            arr[i] = temp % 10;
            i++;
            temp /= 10;
        }
        int isPalindrome = 1; // 팰린드롬 여부를 나타내는 변수 추가
        for (int i = 0; i < numDigits / 2; i++) {
            if (arr[i] != arr[numDigits - 1 - i]) {
                isPalindrome = 0; // 팰린드롬이 아니라면 플래그를 0으로 설정하고 루프 종료
                break;
            }
        }
        if (isPalindrome) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    return 0;
}
