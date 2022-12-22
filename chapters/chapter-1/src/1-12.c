/*
Program that prints the input to output one word at a time.
Idea: we see a char, we are in, and putchar
      if we see any tab, backspace or newline out
*/
#include <stdio.h>

#define FIRST 0

int main() {

    int c;
    int has_been_space = FIRST;
    while ((c = getchar()) != EOF) {
        if ((c == '\t' || c == ' ') && has_been_space == 0) {
            putchar('\n');
            has_been_space = 1;
        }

        else if (c != '\t' && c != ' ') {
           putchar(c);
           has_been_space = 0;
        }
    }
    return 0;
}