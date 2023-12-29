#include <stdio.h>

int main(void)
{
    char arr[1000000];
    int alp[26] = {0, };
    int same = 0;
    int max = 0;
    int num;

    scanf("%s", arr);

    int n = 0;
    while (arr[n] != '\0')
    {
        if (arr[n] >= 'a' && arr[n] <= 'z')
        {
            arr[n] -= 32;
        }
        n++;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            alp[arr[i] - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (max < alp[i])
        {
            max = alp[i];
            num = i + 65;
            same = 0; // 최댓값 갱신 시 same 초기화
        }
        else if (max == alp[i])
        {
            same++;
        }
    }

    if (same >= 1)
    {
        printf("?\n");
    }
    else
    {
        printf("%c\n", (char)num);
    }

    return 0;
}