#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int dice1, dice2;
	srand((int)time(NULL));
	printf("Dice1 result: %d\n", (rand() % 6) + 1);
	printf("Dice2 result: %d\n", (rand() % 6) + 1);
	return 0;
}