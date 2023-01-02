#include <stdio.h>  

#define MAXSIZE 1024

int get_line(char* line);

int
main() {
    
    int len;
    char line[MAXSIZE];

    while ((len = get_line(line)) > 0) {
        if (len > 80) {
            printf("Line: %s is %d chars long\n", line, len);
        } else {
            printf("Line %s is %d chars long, which is not long enough\n", line, len);
        }

    }    
    return 0;
}

int get_line(char* line) {
    int i, c, len;
    
    i = 0;
    len = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        line[i++] = c;
        ++len;
    }

    ++len; /* add the newline */
    line[i] = '\0';

    return len;   
}