#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[20];
	char str2[20];
	char str3[40];

	printf("Input str1: ");
	fgets(str1, sizeof(str1),stdin);
	str1[strlen(str1) - 1] = 0;
	printf("Input str2: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	strncpy(str3, str1, sizeof(str3));
	strncat(str3, str2, sizeof(str3));

	puts(str3);
	return 0;
}