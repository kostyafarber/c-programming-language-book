/*
* converts a string of hexadecimal digits
* into it's equivalent integer value
* includes cases were prefix is 0x or 0X
*/

#include <stdio.h>
#include <ctype.h>

int htoi(char* string);
int check_prefix(char* string);

int
main(int argc, char **argv) {
    
    char* hex = argv[1];
    int dec = htoi(hex);
    printf("Number %s is: %d\n", hex, dec);
    return 0;
}

int htoi(char* string) {
    

    int i, n;
    n = 0;
    for (i = check_prefix(string); string[i] >= '0' && tolower(string[i]) <= 'f'; ++i) {
        if (isdigit(string[i])) {
            n = n * 16 + (string[i] - '0');
        }

        else {
            n = n * 16 + ((tolower(string[i]) - 'a') + 10);
        }
    }

    return n;
}

int check_prefix(char* string) {
    int i = 0;
    if (string[0] == '0' && tolower(string[1]) == 'x') {
        i += 2;
    }

    return i;
}
