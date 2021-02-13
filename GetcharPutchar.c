#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	int st;

    st = getchar();
    if ((st >= 'a' && st <= 'z') || (st >= 'A' &&  st <= 'Z')) {
        if (st >= 'a' && st <= 'z') {
            putchar(toupper(st));
        }
        else if (st >= 'A' && st <= 'Z') {
            putchar(tolower(st));
        }
    }
    else {
        printf("%c is not alphabet.\n", st);
    }
    return 0;
}