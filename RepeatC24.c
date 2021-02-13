#include <stdio.h>

int main(void) {
	int i, j, k;
	int floor;
	printf("Floor? ");
	scanf_s("%d", &floor);

	for (i = 1; i <= floor; i++) {
		for (k = floor;k > i; k--){
			printf(" ");
		}
		for (j = 0; j < i + (i - 1); j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
