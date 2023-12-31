#include <stdio.h>

int main(void)
{
    char arr1[5][16] = {0, };
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", arr1[i]);
    }
    for (int j = 0; j < 15; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (arr1[i][j] == '\0')
            {
                continue;
            }
            else
            {
                printf("%c", arr1[i][j]);
            }
        }
    }
    return 0;
}