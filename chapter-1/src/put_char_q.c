#include <stdio.h>

int main() {

    // can input however much, it'll only take first
    // int c = getchar();
    // putchar(c);
    
    int c;

    // getchar() sends to stdin which is line buffered (buffer only flushes with \n)
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}