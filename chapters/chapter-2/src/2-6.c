/*
* setbits(x, p, n, y) that returns x
* with n bits that begin at position p
* set to the rightmost n bits of y, leaving
* the other bits unchaged.
*/

#include <stdio.h>

int kf_setbits(unsigned int x, unsigned int p, unsigned int n, unsigned int y);
int kr_setbits(unsigned int x, unsigned int p, unsigned int n, unsigned int y);

int
main(int argc, char** argv) {
    unsigned int x = 218;
    unsigned int y = 170;
    unsigned int p = 3;
    unsigned n = 3;

    int kf = kf_setbits(x, p, n, y);
    int kr = kr_setbits(x, p, n, y);
    printf("My answer is: %d\n", kf);
    printf("K&R answer is: %d\n", kr);

    return 0;
}

 int kf_setbits(unsigned int x, unsigned int p, unsigned int n, unsigned int y) {
    int y_mask = ~(~(y & 0) << n);
    int shift = (p + 1 - n); 
    y = (y & y_mask) << shift;
    
    int x_mask = y_mask << shift; 
    x_mask = ~x_mask; 
    x = x & x_mask;
    
    x  = x | y;
    return x;
}


int kr_setbits(unsigned int x, unsigned int p, unsigned int n, unsigned int y) {
    return x & ~(~(~0 << n) << (p + 1 - n)) | (y & ~(~0 << n)) << (p + 1 - n);
}