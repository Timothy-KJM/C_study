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
	printf("������ ��ǥ: (%d %d), (%d %d), (%d %d), (%d %d)\n",
		a.position1.xpos, a.position1.ypos, a.position2.xpos, a.position1.ypos,
		a.position1.xpos, a.position2.ypos, a.position2.xpos, a.position2.ypos);
	printf("���簢���� ����: %d\n", b);
}

int main(void) {
	Rectangle a = { {0, 0}, {100, 100} };
	RectInfo(a);

	return 0;
}