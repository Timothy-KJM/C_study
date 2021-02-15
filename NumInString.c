#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int sum = 0;
	int len;
	char count[1];
	char ch[10];
	printf("문자열 입력: ");
	fgets(ch, sizeof(ch), stdin);
	len = strlen(ch);

	for (int i = 0; i < len; i++) {
		if (ch[i] >= '0' && ch[i] <= '9') {
			count[0] = ch[i];
			sum += atoi(count);
		}
	}
	printf("숫자의 총합: %d", sum);
	return 0;
}