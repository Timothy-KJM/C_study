#include <stdio.h>

int main(void) {
	int a = 0;
	int num;
	printf("수를 입력: ");
	scanf_s("%d", &num);

	for (int i = 2; i <= num; i++) {
		a = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				a = 1;
			}
		}
		if (a == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}