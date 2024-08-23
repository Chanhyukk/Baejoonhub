#include<stdio.h>

int main()
{
	long long N;

	long long fact = 1;
	scanf("%lld", &N);
	for (long long i = 0; i < N; i++)
	{
		fact = fact * (N - i);
		while (fact % 10 == 0)
		{
			fact = fact / 10;
		}
		fact = fact % 1000000000000;
	}


	fact = fact % 100000;
	
if (fact >= 10000) {
        printf("%lld", fact);
    }
    else if (fact >= 1000) {
        printf("0%lld", fact);
    }
    else if (fact >= 100) {
        printf("00%lld", fact);
    }
    else if (fact >= 10) {
        printf("000%lld", fact);
    }
    else {
        printf("0000%lld", fact);
    }


	return 0;
}