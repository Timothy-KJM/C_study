#include <stdio.h>
#include <string.h>

int main(void) {
	struct employee {
		char name[20];
		char personNum[20];
		int income;
	};
	struct employee men[3] = { 0, };

	for (int i = 0; i < 3; i++) {
		printf("Input name: ");
		scanf_s("%s", men[i].name, sizeof(men[i].name));

		printf("Input Resident registration number: ");
		scanf_s("%s", men[i].personNum, sizeof(men[i].personNum));

		printf("Input income: ");
		scanf_s("%d", &men[i].income);

		printf("\n");
	}

	for (int i = 0; i < 3; i++) {
		printf("< Resident registration card >\n");
		printf("Name: %s\n", men[i].name);
		printf("Resident registration Number: %s\n", men[i].personNum);
		printf("Income: %d\n", men[i].income);
		printf("\n");
	}

	return 0;
}