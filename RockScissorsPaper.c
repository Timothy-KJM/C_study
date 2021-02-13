#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RSP();

int main(void) {
	srand((int)time(NULL));
	RSP();
	return 0;
}

void RSP() {
	int i;
	int win = 0, draw = 0;
	while (1) {
		printf("Rock: 1, Scissors:2, Paper: 3, Choose one: ");
		scanf_s("%d", &i);
		int AI = (rand() % 3) + 1;
		if (AI == 1) {
			if (i == 1) {
				printf("You choose Rock, AI chooses Rock, You DRAW\n");
				draw += 1;
			}
			else if (i == 2) {
				printf("You choose Scissors, AI chooses Rock, You LOSE\n");
				printf("\n");
				printf("win: %d, Draw: %d\n", win, draw);
				break;
			}
			else if (i == 3){
				printf("You choose Paper, AI chooses Rock, You WIN\n");
				win += 1;
			}
		}
		else if (AI == 2) {
			if (i == 1) {
				printf("You choose Rock, AI chooses Scissors, You WIN\n");
				win += 1;
			}
			else if (i == 2) {
				printf("You choose Scissors, AI chooses Scissors, You DRAW\n");
				draw += 1;
			}
			else if (i == 3) {
				printf("You choose Paper, AI chooses Scissors, You LOSE\n");
				printf("\n");
				printf("win: %d, Draw: %d\n", win, draw);
				break;
			}
		}
		else if (AI == 3) {
			if (i == 1) {
				printf("You choose Rock, AI chooses Paper, You LOSE\n");
				printf("\n");
				printf("win: %d, Draw: %d\n", win, draw);
				break;
			}
			else if (i == 2) {
				printf("You choose Scissors, AI chooses Paper, You WIN\n");
				win += 1;
			}
			else if (i == 3) {
				printf("You choose Paper, AI chooses Paper, You DRAW\n");
				draw += 1;
			}
		}
	}

}