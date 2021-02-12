/*#include <stdio.h>

int main(void) {
	int num;
	printf("수를 입력: ");
	scanf_s("%d", &num);

	for (int i = 2; i <= num; i++) {
		if (num % i == 0) {
			printf("%d", i);
			num = num / i;
			if (num % i == 0) {
				printf("  ");
			}
			else {
				if (num > i)
					printf("  ");
			}
			i = 1;
		}
	}
	return 0;
}*/