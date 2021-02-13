#include <stdio.h>

int CountNum(int* Numptr, int size, int num);

int main(void) {
	int FindNum;
	int count;
	int NumArr[10] = { 0, };
	for (int i = 0; i < 10; i++) {
		printf("Input Intiger: ");
		scanf_s("%d", &NumArr[i]);
	}
	printf("Please input a number to look for.");
	scanf_s("%d", &FindNum);
	count = CountNum(NumArr, sizeof(NumArr) / sizeof(int), FindNum);
	printf("Count: %d", count);
	return 0;
}

int CountNum(int* Numptr, int size, int num) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (num == Numptr[i]) {
			count += 1;
		}
	}
	return count;
}