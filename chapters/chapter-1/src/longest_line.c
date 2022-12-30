/*
This program prints the longest line we've seen

*/
#include <stdio.h>

#define MAXSIZE 1024

int get_max_line(char* line);
void copy(char* from, char* to);

int
main() {
    char current_line[MAXSIZE];    
    char longest_line[MAXSIZE];
    int max, curr;

    max = 0;
    curr = 0;
    while ((curr = get_max_line(current_line)) > 0) {
        if (curr > max) {
            max = curr;
            copy(current_line, longest_line);
        }
    }

    printf("Length of the longest line was: %d\n", max);
    printf("Longest line was: %s", longest_line);
    return 0;
}

int get_max_line(char* line) {
    int c;
    int len = 0;
    int i = 0;

    while ((c = getchar()) != EOF && c != '\n') {
        ++len;
        line[i] = c;
        ++i;
    }

    line[i++] = '\n';
    line[i] = '\0';
    return len;
}

void copy(char* from, char* to) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
// my name is jude