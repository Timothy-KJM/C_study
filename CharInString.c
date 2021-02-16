#include <stdio.h>

int main(void) {
	int i = 0;
	int count = 0;
	char string[20];

	printf("Input String: ");
	scanf_s("%s", string, sizeof(string));

	while (string[i] != NULL) {
		i++;
		count++;
	}
	printf("char count: %d", count);

	return 0;
}