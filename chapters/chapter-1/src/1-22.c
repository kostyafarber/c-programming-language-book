/*
* fold 
* idea is to break up line 
* into two or more lines after last non-blank
* char before the nth column.
*/

#include <stdio.h>

#define MAXCOL 24

int get_line(char* line);

int
main() {

    return 0;
}

int get_line(char* line) {
    int c;
    int i = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        line[i] = c;
    }
}