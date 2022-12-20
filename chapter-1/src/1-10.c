#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        
        switch (c) {
            case '\t': 
                printf("\\t");
                break;

            case ' ':
                printf("\\b");
                break;

            case '\\':
                printf("\\\\");
                break;

            default:
                putchar(c);
                break;
        }
    }
    return 0;
}