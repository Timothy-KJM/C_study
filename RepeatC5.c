#include <stdio.h>

int main(void) {
	int i = 0, sum = 0;
	for (int j = 0; j < 100; j++) {
		i++;
		if (i % 3 == 0) {
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}