/*
* strrindex(s, t) finds the RIGHTMOST position of t in s
* -1 otherwise
*/

#include <stdio.h>
#include <stdlib.h>

int strrindex(char *s, int t);

int 
main(int argc, char **argv) {
    char *s = argv[1];
    int t = argv[2][0];

    int idx = strrindex(s, t);

    if (idx != -1) {
        printf("Rightmost %c in %s is %d\n", t, s, idx);   
    } else {
        printf("%c not found in %s\n", t, s);
    }

    return 0;
}

int strrindex(char *s, int t) {
    int idx = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == t) {
            idx = i;
        }
    }

    if (idx) {
        return idx;
    } else {
        return -1;
    }
    
}