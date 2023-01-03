/*
* this is an alternate version of squeeze(s1, s2)
* squeeze deletes each char in s1 that matches ANY
* char in s2.


*/
#include <stdio.h>

void squeeze(char *s1, char* s2);
int check_char(char* s, int c);

int
main(int argc, char** argv) {
    char* s1 = argv[1];
    char* s2 = argv[2];

    printf("Original s1: %s, original s2: %s\n", s1, s2);
    squeeze(s1, s2);
    printf("New s1: %s\n", s1);
    return 0;
}

int check_char(char* s, int c) {
    while (*s != '\0') {
        if (*s == c) {
            return 1;
        }
        s++; 
    }
    return 0;
}

void squeeze(char* s1, char* s2) {
    int i, j;

    for (i = j = 0; s1[i] != '\0'; ++i) {
        if (!check_char(s2, s1[i])) {
            s1[j++] = s1[i];
        }
    }

    s1[j] = '\0';
}

