include <stdio.h>

int main(void) {
	int answer = 0;
	int j = 1;
	for (int i = 0; i < 10; i++) {
		answer += j;
		j++;
	}
	printf("%d", answer);
	return 0;
}