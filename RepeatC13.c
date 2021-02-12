/*#include <stdio.h>

int main(void) {
	int end_month, end_day;
	int day_count[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("달과 일을 입력: ");
	scanf_s("%d %d", &end_month, &end_day);
	int count = monthtoday(end_month, end_day, day_count);
	printf("%d", count);
	return 0;
}

int monthtoday(int month, int day, int day_count[]) {
	int count = 0;
	for (int i = 0; i < month - 1; i++) {
		count += day_count[i];
	}
	count += day;

	return count;
}*/