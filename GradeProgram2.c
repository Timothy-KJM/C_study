#include <stdio.h>

int main(void) {
	int StuNSco[3][3];
	int total;
	for (int i = 0; i < 3; i++) {
		printf("Input Student%d's score(Kor, Math, Eng): ", i+1);
		scanf_s("%d %d %d", &StuNSco[i][0], &StuNSco[i][1], &StuNSco[i][2]);
	}

	for (int j = 0; j < 3; j++) {
		total = StuNSco[j][0] + StuNSco[j][1] + StuNSco[j][2];
		printf("Korean   Math   Englsih   Total   Average\n");
		printf("  %d      %d       %d       %d       %f  \n", StuNSco[j][0], StuNSco[j][1], StuNSco[j][2], total, (float)total / 3);
	}
	return 0;
}