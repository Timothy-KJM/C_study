#include <stdio.h>
#include <string.h>

int main(void) {
	int count = 0;
	int len;
	char string1[20] = { 0, };
	char string2[20] = { 0, };

	printf("Input str1: ");
	scanf_s("%s", string1, sizeof(string1));

	printf("Input str2: ");
	scanf_s("%s", string2, sizeof(string2));

	len = strlen(string1);

	if (strstr(string1, string2) != 0) {
		printf("YES\n");
		for (int j = 0; j < len; j++) {
			count++;
			if (string1[j] == string2[0]) {
				printf("%d", count);
				break;
			}
		}
	}
	else {
		printf("NO\n");
	}

	return 0;
}