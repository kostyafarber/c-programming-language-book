/*
* write a pointer version of strcat(s, t)
*/

#include <stdio.h>

void _strcat(char *s, char *t);

int
main(int argc, char **argv) {

    printf("First arg: %s, second arg: %s\n", argv[1], argv[2]);
     _strcat(argv[1], argv[2]);
    printf("After concatenating %s\n", argv[1]);
    return 0;
}

void _strcat(char *s, char *t) {
    while (*s) {
        s++;
    }

    while (*t) {
        *s = *t;
        s++;
        t++;
    }
}