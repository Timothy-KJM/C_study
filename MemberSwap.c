#include <stdio.h>

typedef struct {
	int xpos;
	int ypos;
} Point;

void Swappoint(Point* pos1) {
	int temp;
	temp = pos1->xpos;
	pos1->xpos = pos1->ypos;
	pos1->ypos = temp;
}

int main(void) {

	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };
	
	Swappoint(&pos1);
	printf("[%d, %d]\n", pos1.xpos, pos1.ypos);
	Swappoint(&pos2);
	printf("[%d, %d]\n", pos2.xpos, pos2.ypos);

	return 0;
}