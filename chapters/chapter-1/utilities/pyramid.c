#include <stdio.h>

#define N 10

int main() {
    int n = N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= N; j++) {
            if ((i + j - 1) >= (n - 1)) {
                printf("*");
            }

            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}