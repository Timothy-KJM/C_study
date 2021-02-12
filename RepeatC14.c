#define SIZE 7
#include <stdio.h>

int main(void) {
	int num, sum = 0;
	int i, j = 0;
	for (i = 0; i < SIZE; i++) {
		j++;
		printf("정수를 입력: ");
		scanf_s("%d", &num);
		if (num != 0) {
			sum += num;
		}
		else {
			printf("오류");
			break;
		}
	}
	if (j == SIZE) {
		printf("%d", sum);
	}
	return 0;
}