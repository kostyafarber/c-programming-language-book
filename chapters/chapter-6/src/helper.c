#include "helper.h"

int get_word(char *word, int lim)
{
    int c;
    char *w = word;

    while (isspace(c = getchar()))
        ;

    if (c != EOF)
        *w++ = c;

    *w = '\0';
    return word[0];
}