/*
* determine data types and sizes
*/
#include <stdio.h>
#include <limits.h>

#define OCT '\07' /* how to define on octal number*/
int 
main() {
    
    /* signed */
    printf("Min value of a signed char is: %d, Max value of a char is: %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Min value of a signed short is: %d, Max value of a char is: %d\n", SHRT_MIN, SHRT_MAX);
    printf("Min value is of signed int is %d, Max value is of int is %d\n", INT_MIN, INT_MAX);
    printf("Min value is of signed long is %ld, Max value is of int is %ld\n", LONG_MIN, LONG_MAX);
    
    /* unsigned */
    printf("Min value of a unsigned char is: %d, Max value of a char is: %d\n", 0, UCHAR_MAX);
    printf("Min value of a unsigned short is: %d, Max value of a char is: %d\n", 0, USHRT_MAX);
    printf("Min value is of unsigned int is %d, Max value is of int is %u\n", 0, UINT_MAX);
    printf("Min value is of unsigned long is %d, Max value is of int is %lu\n", 0, ULONG_MAX);
    return 0;
}