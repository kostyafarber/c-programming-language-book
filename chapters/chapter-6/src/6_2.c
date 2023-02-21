/*
* 6-2: Write a program that reads a C program
* and prints in alphabetical order each group of 
* variable names that are identical in the 6 first
* characters, but different thereafter. Don't count
* words within strings or comments.
*
* usage: 6_2 same_chars
* 
* $ 6_2 6
*/

#include "helper.h"
#include <stdlib.h>
#define MAXWORD 100

int
main(int argc, char **argv)
{
    long identical_chars = strtol(argv[1], NULL, 10);

    char word[MAXWORD];
    int c;
    while ((get_word(word, MAXWORD)) != EOF) {
        printf("%s", word);
    }

}