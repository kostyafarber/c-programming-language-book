#include <stdio.h>

#define TABSTOP 2

int
main() {
    int c;
    int pos = 1;
    int nb = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            nb = TABSTOP - ((pos - 1) % TABSTOP);
            while (nb > 0) {
                putchar('#');
                --nb;
                ++pos;
            }
        }

        else {
            putchar(c);
            ++pos;
        }
    }
    return 0;
}