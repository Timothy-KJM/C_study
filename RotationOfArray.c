#include <stdio.h>

void array0(int(*arr)[4], int size);
void array90(int(*arr)[4], int size);
void array180(int(*arr)[4], int size);
void array270(int(*arr)[4], int size);

int main(void) {
	int arr[4][4] = { 0, };
	array0(arr, sizeof(arr) / sizeof(int));
	array90(arr, sizeof(arr) / sizeof(int));
	array180(arr, sizeof(arr) / sizeof(int));
	array270(arr, sizeof(arr) / sizeof(int));
	return 0;
}

void array0(int(*arr)[4], int size) {
	int count = 0;
	for (int i = 0; i < size / 4; i++) {
		for (int j = 0; j < size / 4; j++) {
			count++;
			arr[i][j] = count;
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void array90(int(*arr)[4], int size) {
	int count = size;
	for (int i = 0; i < size / 4; i++) {
		for (int j = 0; j < size / 4; j++) {
			arr[3 - j][i] = count;
			count--;
		}
	}
	for (int i = 0; i < size / 4; i++) {
		for (int j = 0; j < size / 4; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void array180(int(*arr)[4], int size) {
	int count = size;
	for (int i = 0; i < size / 4; i++) {
		for (int j = 0; j < size / 4; j++) {
			arr[i][j] = count;
			count--;
		}
	}
	for (int i = 0; i < size / 4; i++) {
		for (int j = 0; j < size / 4; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void array270(int(*arr)[4], int size) {
	int count = 0;
	for (int i = 0; i < size / 4; i++) {
		for (int j = 0; j < size / 4; j++) {
			count++;
			arr[3 - j][i] = count;

		}
	}
	for (int i = 0; i < size / 4; i++) {
		for (int j = 0; j < size / 4; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}