/*
* write a revised version of countbits(x)
* that uses the fact that in a two compliment
* system x & (x - 1) turns the rightmost bit in x
* off.

* original countbits(x)
*/

#include <stdio.h>

int o_countbits(unsigned x);
int n_countbits(unsigned x);

int 
main(int argc, char **argv) {
    unsigned num = 83;
    
    printf("Number of 1 bits in %d with x >>= 1 method is %d\n", num, o_countbits(num));
    printf("Number of 1 bits in %d with x & (x - 1) method is %d\n", num, o_countbits(num));
    return 0;
}

int o_countbits(unsigned x) {
    int count = 0;
    for (; x != 0; x >>= 1) {
        if ((x & 1) == 1) {
            ++count;
        }
    }
    return count;
}

int n_countbits(unsigned x) {
    int count = 0;
    for (; x != 0; x &= (x - 1)) { /* deletes the right most 1 bit every iteration*/
            ++count;
    }
    return count;
}