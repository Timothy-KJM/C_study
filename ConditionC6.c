#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void StringMemSwap(char* num1, char* num2) {
	char temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main(void) {
	int answer = 0;
	char num[3];
	printf("�� �ڸ��� ������ �Է�: ");
	scanf_s("%s", num, sizeof(num));
	StringMemSwap(&num[0], &num[1]);

	answer = atoi(num);
	printf("�ٲ� ������ �� ���: %d\n", answer);
	printf("sizeof �� ���: %d\n", sizeof(answer));
	
	return 0;
}