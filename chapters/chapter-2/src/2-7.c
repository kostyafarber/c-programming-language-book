/*
* invert(x, p, n) that returns x with n
* bits that begin at p inverted (1 to 0 and vice versa)
* leaving the others unchanged
*/
#include <stdio.h>

int kf_invert(unsigned x, unsigned p, unsigned n);
int kr_invert(unsigned x, unsigned p, unsigned n);

int
main(int argc, char **argv) {
    unsigned x = 145;
    unsigned p = 4;
    unsigned n = 2;
    
    printf("K&R answer: %d\n", kr_invert(x, p, n));
    printf("My answer: %d\n", kf_invert(x, p, n));
    return 0;
}


int kf_invert(unsigned x, unsigned p, unsigned n) {
    unsigned mask = ~(~0 << n) << (p + 1 - n);
    x = x ^ mask;
    return x;
}

int kr_invert(unsigned x, unsigned p, unsigned n) {
    return x ^ (~(~0 << n) << (p + 1 -n));
}