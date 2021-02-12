#include <stdio.h>

int main(void) {
	int dan;
	printf("단을 입력: ");
	scanf_s("%d", &dan);

	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}
	return 0;
}