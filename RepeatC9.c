/*#define TRUE 1
#include <stdio.h>
#include <ctype.h>

int main(void) {
	int dan;
	printf("���� �Է�: ");
	scanf_s("%d", &dan);
	while(1){
		if (isdigit(dan) == TRUE) {
			for (int i = 1; i < 10; i++) {
				printf("%d x %d = %d\n", dan, i, dan * i);
			}
			break;
		}
		else {
			printf("���� �Է�: ");
			scanf_s("%d", &dan);
		}
	}

	return 0;
}*/