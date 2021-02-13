#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("RandomNumber's range is 0 to 99\n\n");
	for (int i = 0; i < 5; i++) {
		printf("RandomNumber is %d\n", (rand() % 100));
	}
	return 0;
}