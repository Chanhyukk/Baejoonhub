#include <stdio.h>

int main(void)
{
    int arr[9][9];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = 0;
    int imax = 0;
    int jmax = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (max <= arr[i][j])
            {
                max = arr[i][j];
                imax = i + 1;
                jmax = j + 1;
            }
        }
    }
    printf("%d\n%d %d", max, imax, jmax);
    return 0;
}