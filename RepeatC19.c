#include <stdio.h>

int main(void) {
	int a = 0;
	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			a = 1;
		}
	}
	if (a == 0) {
		printf("�Ҽ�");
	}
	else {
		printf("�Ҽ�x");
	}
	return 0;
}