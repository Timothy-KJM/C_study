/*#include <stdio.h>

void MaxAndMin(int** max, int size, int** min, int* arr);

int main(void) {
	int* maxPtr;
	int* minPtr;
	int arr[5];
	for (int i = 0; i < 5; i++) {
		printf("int: ");
		scanf_s("%d", &arr[i]);
	}
	MaxAndMin(&maxPtr,sizeof(arr)/sizeof(int), &minPtr, arr);
	printf("%d, %d", *maxPtr, *minPtr);
	return 0;
}

void MaxAndMin(int** max, int size, int** min, int* arr) {
	int* max1, * min1;
	max1 = min1 = &arr[0];
	for (int i = 0; i < size; i++) {
		if (*max1 < arr[i]) {
			max1 = &arr[i];
		}
	}
	for (int i = 0; i < size; i++) {
		if (*min1 > arr[i]) {
			min1 = &arr[i];
		}
	}
	*max = max1;
	*min = min1;
}*/