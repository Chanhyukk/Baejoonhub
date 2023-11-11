#include <stdio.h>

int main(void)
{
	int i, j;
	scanf("%d %d", &i, &j);
	if (i > j)
	{
		printf(">\n");
	}
	else if (i < j)
	{
		printf("<\n");
	}
	else
	{
		printf("==\n");
	}	
}