#include <stdio.h>
#include <string.h>

void menu(void) {
	printf("choose one of the following.\n");
	printf("\n");
	printf("apple\n");
	printf("orange\n");
	printf("banana\n");
	printf("peach\n");
	printf("-----------------------------\n");
	printf("\n");
}

void select_menu(char *select) {
	if (strcmp(select,"apple") == 0) printf("your choice is apple");
	else if (strcmp(select,"orange")== 0) printf("your choice is orange");
	else if (strcmp(select, "banana") == 0) printf("your choice is banana");
	else if (strcmp(select, "peach")== 0) printf("your choice is peach");
}

int main(void) {
	char select[20];

	menu();
	printf("주문하실 메뉴를 입력해주세요: ");
	scanf_s("%s", select, sizeof(select));
	select_menu(select);
	return 0;
}