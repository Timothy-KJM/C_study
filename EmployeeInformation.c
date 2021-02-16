#include <stdio.h>
#include <string.h>

int main(void) {
	struct employee {
		char name[20];
		char personNum[20];
		int income;
	};

	struct employee man1;

	printf("Input Name: ");
	fgets(man1.name, sizeof(man1.name), stdin);
	man1.name[strlen(man1.name) - 1] = 0;

	printf("Input Resident registration number: ");
	fgets(man1.personNum, sizeof(man1.personNum), stdin);
	man1.personNum[strlen(man1.personNum) - 1] = 0;

	printf("Input Income: ");
	scanf_s("%d", &man1.income);

	printf("Name: %s\n", man1.name);
	printf("Resident registration Number: %s\n", man1.personNum);
	printf("Income: %d\n", man1.income);

	return 0;

}