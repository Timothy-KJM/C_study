#include <stdio.h>

int main(void) {
	int a = 0;
	int num;
	printf("수를 입력: ");
	scanf_s("%d", &num);

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			a = 1;
		}
	}
	if (a == 0) {
		printf("소수");
	}
	else {
		printf("소수x");
	}
	return 0;
}