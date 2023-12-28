#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    scanf("%s", str);
    int n = strlen(str);
    int index = 1;
    for (int i = 0; i < (n / 2); i++)
    {
        if (str[i] != str[n - 1 - i])
        {
            index = 0;
            break;
        }
    }

    printf("%d\n", index);
    return 0;
}