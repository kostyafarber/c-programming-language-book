/*
* rightrot(x, n) that returns the value of the
* integer x rotated to the right by n bit positions
*/

#include <stdio.h>

int kf_rightrot(unsigned int x, unsigned int n);

int
main(int argc, char **argv) {
    int x = 40; /* 00000000000000000000000000101000 */ 
    int p = 20; /* 00000000000000101000000000000000 */

    printf("My answer, result after %d rotations is: %d\n", p, kf_rightrot(x, p));
    return 0;
}


int kf_rightrot(unsigned int x, unsigned int n) {
    while (n > 0) {
        if ((x & 1) == 1) {
            x = (x >> 1);
            x = x | ~(~0U >> 1);
        }

        else {
            x = (x >> 1);
        }
        --n;
    }
    return x;
}