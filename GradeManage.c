#include <stdio.h>

int maxscore(int* sptr, int size) {
	int max = sptr[0];
	for (int i = 0; i < size; i++) {
		if (sptr[i] > max) {
			max = sptr[i];
		}
	}
	return max;
}

int minscore(int* sptr, int size) {
	int min = sptr[0];
	for (int i = 0; i < size; i++) {
		if (sptr[i] < min) {
			min = sptr[i];
		}
	}
	return min;
}

int sumscore(int* sptr, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		count += sptr[i];
	}
	return count;
}

int main(void) {
	int score[10] = { 0, };
	int max, min;
	int count;
	for (int i = 0; i < 10; i++) {
		printf("점수를 입력: ");
		scanf_s("%d", &score[i]);
	}
	max = maxscore(score, sizeof(score)/sizeof(int));
	min = minscore(score, sizeof(score) / sizeof(int));
	count = sumscore(score, sizeof(score) / sizeof(int));
	printf("\n");
	printf("최고 점수: %d\n", max);
	printf("최저 점수: %d\n", min);
	printf("점수 합계: %d\n", count);
	printf("점수 평균: %d\n", count / (sizeof(score) / sizeof(int)));

	return 0;
}