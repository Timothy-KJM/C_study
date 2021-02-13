#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    int st;

    st = fgetc(stdin);
    if ((st >= 'a' && st <= 'z') || (st >= 'A' && st <= 'Z')) {
        if (st >= 'a' && st <= 'z') {
            fputc(toupper(st), stdout);
        }
        else if (st >= 'A' && st <= 'Z') {
            fputc(tolower(st), stdout);
        }
    }
    else {
        printf("%c is not alphabet.\n", st);
    }
    return 0;
}