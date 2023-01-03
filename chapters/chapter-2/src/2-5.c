/*
* any(s1, s2) returns the first location
in string s1 where any char from the string s2 occurs
or -1 if there is none.
*/
#include <stdio.h>

int any(char* s1, char* s2);
int check_char(char* s, int c);

int 
main(int argc, char** argv) {
    char* s1 = argv[1];
    char* s2 = argv[2];
    int idx = any(s1, s2);

    if (idx != -1) {
        printf("Value found %c at index %d, for string %s and lookup string %s \n", s1[idx], idx, s1, s2);
    }

    else {
        printf("No match found\n");
    }
    return 0;
}

int check_char(char* s, int c) {
    int found = 0;
    while (*s != '\0') {
        if (*s == c) {
            found = 1;
        }
        s++; 
    }
    return found;
}

int any(char* s1, char*s2) {
    int i;

    for (i = 0; s1[i] != '\0'; ++i) {
        if (check_char(s2, s1[i])) {
            return i;
        }
    }
    return -1;
}