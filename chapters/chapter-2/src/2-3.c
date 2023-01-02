/*
* converts a string of hexadecimal digits
* into it's equivalent integer value
*/

#include <stdio.h>
#include <ctype.h>

int htoi(char* string);

int
main(int argc, char **argv) {
    
    char* hex = argv[1];
    int dec = htoi(hex);
    printf("Number is: %d\n", dec);
    return 0;
}

int htoi(char* string) {
    int i, n;
    n = 0;
    for (i = 0; string[i] >= '0' && string[i] <= 'F'; ++i) {
        if (isdigit(string[i])) {
            n = n * 16 + (string[i] - '0');
        }

        else {
            n = n * 16 + ((string[i] - 'A') + 10);
        }
    }

    return n;
}