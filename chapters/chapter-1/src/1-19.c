/*
This program reverses it's 
input and prints it to stdout
*/

#include <stdio.h>
#include <string.h>

#define MAXLINE 1024

void reverse(char line[], int len);
int get_line(char* line);
void copy(char* from, char* to);

int
main() {
    char line[MAXLINE];
    int c;
    while ((c = get_line(line)) > 0) {
        reverse(line, strlen(line));
        printf("%s\n", line);
    }

    return 0;
}

void reverse(char line[], int len) {
    int start, end;
    start = 0;
    end = len - 1;
    while (start <= end) {
        char temp = line[end];
        line[end] = line[start];
        line[start] = temp;
        ++start;
        --end;

    }
}


int get_line(char* line) {
    int c;
    int len = 0;
    int i = 0;

    while ((c = getchar()) != EOF && c != '\n' && i < MAXLINE) {
        ++len;
        line[i++] = c;
    }

    line[i] = '\0';
    return len;
}

void copy(char* from, char* to) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}