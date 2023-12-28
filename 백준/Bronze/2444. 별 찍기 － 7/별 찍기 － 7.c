#include <stdio.h>

int main(void) {

	int input;

	scanf("%d", &input);

	for (int i = 1; i <= input; i++) {
		for (int j = 0; j < input - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = input - 1; i > 0; i--) {
		for (int j = 0; j < input - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
