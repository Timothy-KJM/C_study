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
	printf("두 자리의 정수를 입력: ");
	scanf_s("%s", num, sizeof(num));
	StringMemSwap(&num[0], &num[1]);

	answer = atoi(num);
	printf("바뀐 정수의 값 출력: %d\n", answer);
	printf("sizeof 값 출력: %d\n", sizeof(answer));
	
	return 0;
}