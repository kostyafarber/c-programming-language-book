#include <stdio.h>
#include <ctype.h>

#define MAXCHARS 128

int main() {
    int char_counts[MAXCHARS] = {0};

    int c;
    while ((c = getchar()) != EOF) {
        ++char_counts[c];
    }

    for (int i = 0; i < MAXCHARS - 1; ++i) {
        if (char_counts[i] != 0 && isprint(i)) {
            printf("%c ", i);
            for (int j = 0; j <= char_counts[i] - 1; ++j) {
                printf("*");
            }

            printf("\n");
        }
    }
    return 0;
}