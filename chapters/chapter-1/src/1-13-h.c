#include <stdio.h>
/*
Print histogram of the lengths of words in it's input
use stars * (i.e for word "what", "distinguish")
****
***********
...
*/

#define SPACE 0;

int main() {
    
    int has_been_space = SPACE;
    int c, count;
    count = 0;
    while ((c = getchar()) != EOF) {
        if ((c == '\t' || c == ' ' || c == '\n') && has_been_space == 0) {
            has_been_space = 1;

            for (int i = 0; i < count; ++i) {
                printf("*");
            }
            putchar('\n');

            count = 0;
        }

        else if (c != '\t' && c != ' ') {
           ++count;
           has_been_space = 0;
        }
    }  
    return 0;
}

