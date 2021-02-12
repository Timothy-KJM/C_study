#include <stdio.h>
#include <stdlib.h> // rand() 함수 포함 라이브러리
#include <time.h>

int main(){
	srand(time(NULL));
	int num = 0;
	int random = 0; // 정수형 변수 선언
	random = rand() % 100 + 1; // 난수 생성
	for (int i = 0; i < 10; i++) {
		printf("숫자를 입력: ");
		scanf_s("%d", &num);
		if (num < random) {
			printf("%d 보다 큽니다.\n", num);
			if (i == 9)
				printf("게임 오버");
		}
		else if (num == random) {
			printf("정답입니다.\n");
			break;
		}
		else {
			printf("%d 보다 작습니다.\n", num);
			if (i == 9)
				printf("게임 오버");
		}
	}
	return 0;
}