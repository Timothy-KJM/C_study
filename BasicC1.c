#include <stdio.h>

void sum(int num1, int num2);
void sub(int num1, int num2);
void mul(int num1, int num2);
void div(int num1, int num2);

int main(void) {
	int n1, n2 = 0;
	printf("두 정수를 입력: ");
	scanf_s("%d %d", &n1, &n2);

	printf("\n");

	sum(n1, n2);
	sub(n1, n2);
	mul(n1, n2);
	div(n1, n2);

	return 0;
}

void sum(int num1, int num2) {
	int answer = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, answer);
}

void sub(int num1, int num2) {
	int answer = num1 - num2;
	printf("%d - %d = %d\n", num1, num2, answer);
}

void mul(int num1, int num2) {
	int answer = num1 * num2;
	printf("%d x %d = %d\n", num1, num2, answer);
}

void div(int num1, int num2) {
	int answer = num1 / num2;
	printf("%d / %d = %d\n", num1, num2, answer);
}