#include <stdio.h>

int main(void) {
	int num = 9;
	int num2 = 9;
	for (int i = 0; i < num; i++) {
		for (int k = 0; k < i; k++) {
			printf(" ");
		}
		for (int j = num; j > i; j--) {
				printf("*");
		}
		printf("\n");
		num--;
	}
	for (int i = 3; i < num2; i++) {
		for (int k = num2; k >= 0; k--) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}