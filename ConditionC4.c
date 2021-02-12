#include <stdio.h>

char grade_text(int score);

int main(void) {
	int score;
	char grade;
	printf("점수를 입력하세요: ");
	scanf_s("%d", &score);
	printf("\n");

	grade = grade_text(score);
	printf("당신의 등급은 %c 입니다.", grade);

	return 0;
}

char grade_text(int score) {
	char grade;
	if (80 <= score && score <= 100) 
		grade = 'A';
	else if (60 <= score && score <= 79) 
		grade = 'B';
	else if (40 <= score && score <= 59) 
		grade = 'C';
	else if (20 <= score && score <= 39) 
		grade = 'D';
	else if (0 <= score && score <= 19) 
		grade = 'E';

	return grade;
}