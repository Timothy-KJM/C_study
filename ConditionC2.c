#include <stdio.h>

int main(void) {
	int num;
	printf("정수를 입력: ");
	scanf_s("%d", &num);

	if (num % 2 == 0) printf("%d은 짝수 입니다.", num);
	else printf("%d은 홀수 입니다.", num);

	return 0;
}