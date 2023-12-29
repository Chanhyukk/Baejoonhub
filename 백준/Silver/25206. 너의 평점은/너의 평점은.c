#include <stdio.h>

float conversion(char *rating)
{
    if (rating[0] == 'A')
    {
        if (rating[1] == '+')
        {
            return 4.5;
        } else {
            return 4.0;
        }
    }
    else if (rating[0] == 'B')
    {
        if (rating[1] == '+')
        {
            return 3.5;
        } else {
            return 3.0;
        }
    }
    else if (rating[0] == 'C')
    {
        if (rating[1] == '+')
        {
            return 2.5;
        } else {
            return 2.0;
        }
    }
    else if (rating[0] == 'D')
    {
        if (rating[1] == '+')
        {
            return 1.5;
        } else {
            return 1.0;
        }
    }
    else if (rating[0] == 'F')
    {
        return 0.0;  // 수정: 'F' 등급일 때 0.0으로 반환
    }
    else
    {
        return 0.0;  // 수정: 알 수 없는 등급일 때 0.0으로 반환
    }
}

int main(void) {
    char sub[51];
    float grades = 0;
    char rate[3];
    float score = 0;
    float sum = 0;

    for (int i = 0; i < 20; i++) {
        scanf("%s %f %s", sub, &grades, rate);
        if (rate[0] == 'P') {
            continue;
        }
        sum += grades;
        score += conversion(rate) * grades;
    }
    
    if (sum > 0) 
    {
        printf("%f\n", score / sum);
    } 
    else 
    {
        printf("총 학점이 0입니다.\n");
    }
    return 0;
}
