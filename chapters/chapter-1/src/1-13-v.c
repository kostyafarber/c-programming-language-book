#include <stdio.h>
/*
Print histogram of the lengths of words in it's input
use stars * (i.e for word "what", "distinguish")
****
***********
...
*/

#define SPACE 0
#define MAXWORDS 500

int get_max_len(int* word_lens);

int main() {
    
    int has_been_space = SPACE;
    int len_words[MAXWORDS] = {0};

    int c, i, count;
    count = i = 0;
    while ((c = getchar()) != EOF) {
        if ((c == '\t' || c == ' ' || c == '\n') && has_been_space == 0) {
            has_been_space = 1;

            ++i;
        }

        else if (c != '\t' && c != ' ') {
           ++len_words[i];
           has_been_space = 0;
        }
    }

    int max_len = get_max_len(len_words);

    for (int i = 0; i < max_len; ++i) {
        for (int j = 0; len_words[j] != 0; ++j) {
            if (i >= (max_len - len_words[j])) {
                printf("* ");
            }

            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

int get_max_len(int* word_lens) {
    int max = 0;

    for (int i = 0; i < MAXWORDS; ++i) {
        if (word_lens[i] > max) {
            max = word_lens[i];
        }
    }

    return max;
}

