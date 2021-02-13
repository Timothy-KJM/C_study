#include <stdio.h>

int MaxScore(int* score, int size) {
	int max = score[0];
	for (int i = 0; i < size; i++) {
		if (max < score[i]) {
			max = score[i];
		}
	}
	return max;
}

int MinScore(int* score, int size) {
	int min = score[0];
	for (int i = 0; i < size; i++) {
		if (min > score[i]) {
			min = score[i];
		}
	}
	return min;
}

int AverageScore(int* score, int size) {
	int sum = 0;
	int average;
	for (int i = 0; i < size; i++) {
		sum += score[i];
	}
	average = sum / size;
	return average;
}

int main(void) {
	int Max, Min, Average;
	int score[10] = { 0, };
	for (int i = 0; i < 10; i++) {
		printf("Input Score: ");
		scanf_s("%d", &score[i]);
	}
	Max = MaxScore(score, sizeof(score) / sizeof(int));
	Min = MinScore(score, sizeof(score) / sizeof(int));
	Average = AverageScore(score, sizeof(score) / sizeof(int));

	printf("최고점: %d, 최저점: %d, 평균: %d", Max, Min, Average);
	return 0;
}