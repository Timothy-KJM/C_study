#include <stdio.h>

int main(void) {
	int i = 0, sum = 0;
	do {
		i++;
		if (i % 3 == 0) {
			sum += i;
		}
	} while (i <= 100);
	printf("%d", sum);
	return 0;
}