#include <stdio.h>
/* count number of blanks, tabs and newlines*/

int main() {
    
    int nb, nt, nl;
    nb = 0;
    nt = 0;
    nl = 0;
    char c;
    
    while ((c = getchar()) != EOF) {
        switch (c) {
            case ' ':
                ++nb;
                break;

            case '\t':
                ++nt;
                break;

            case '\n':
                ++nl;
                break;
        }
    }

    printf("Number of blank lines: %d\nNumber of tabs: %d\nNumber of lines: %d\n", nb, nt, nl);
    return 0;
}