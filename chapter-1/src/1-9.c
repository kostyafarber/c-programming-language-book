#include <stdio.h>

int main() {
    char c;
    int first_space = 0;

    while ((c = getchar()) != EOF) {
        putchar(c);
        while (c == ' ') {
            c = ' ';
        }
    }
    return 0;
}