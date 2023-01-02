/*
* remove comments from c program
* considerations 
*/

#include <stdio.h>

void single_line_comment();

int
main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '/') {
            int next_char = getchar();

            if (next_char == '/') {
                single_line_comment();
            }
        }

        else {
            putchar(c);
        }
    }    
    return 0;
}

void single_line_comment() {
    int ch;

    while ((ch = getchar()) != '\n') {
        ;
    }

    putchar('\n');
}



