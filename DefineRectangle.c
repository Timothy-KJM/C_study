#include <stdio.h>

typedef struct {
	int xpos;
	int ypos;
} Point;

typedef struct {
	Point position1;
	Point position2;
} Rectangle;

void RectInfo(Rectangle a) {
	int b = (a.position2.xpos - a.position1.xpos) * (a.position2.ypos - a.position1.ypos);
	printf("점들의 좌표: (%d %d), (%d %d), (%d %d), (%d %d)\n",
		a.position1.xpos, a.position1.ypos, a.position2.xpos, a.position1.ypos,
		a.position1.xpos, a.position2.ypos, a.position2.xpos, a.position2.ypos);
	printf("직사각형의 넓이: %d\n", b);
}

int main(void) {
	Rectangle a = { {0, 0}, {100, 100} };
	RectInfo(a);

	return 0;
}