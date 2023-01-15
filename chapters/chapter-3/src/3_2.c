/*
* Write a function escape(s, t)
* converts characters like newline and tab
* into visible sequences like '\n' and `\t`
* as it copies t to s
*/

#include <stdlib.h>
#include <stdio.h>

void escape(char *s, char *t);

int
main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Not enough args\n");
        exit(EXIT_FAILURE);
    }
    char *s = argv[1];
    char *t = argv[2];
    
    printf("Original s: %s\n", s);
    printf("Original t: %s\n", t);

    escape(s, t);

    printf("New s is: %s\n", s);
    return 0;
}

void escape(char *s, char *t) {
    int i, j = 0;
    for (i = j = 0; t[i] != '\0'; i++) {
        s[j++] = t[i]; 
    }
    s[j] = '\0';


}