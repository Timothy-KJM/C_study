#include <stdio.h>
#include <stdlib.h> // rand() �Լ� ���� ���̺귯��
#include <time.h>

int main(){
	srand(time(NULL));
	int num = 0;
	int random = 0; // ������ ���� ����
	random = rand() % 100 + 1; // ���� ����
	for (int i = 0; i < 10; i++) {
		printf("���ڸ� �Է�: ");
		scanf_s("%d", &num);
		if (num < random) {
			printf("%d ���� Ů�ϴ�.\n", num);
			if (i == 9)
				printf("���� ����");
		}
		else if (num == random) {
			printf("�����Դϴ�.\n");
			break;
		}
		else {
			printf("%d ���� �۽��ϴ�.\n", num);
			if (i == 9)
				printf("���� ����");
		}
	}
	return 0;
}