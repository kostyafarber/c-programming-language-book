#include <stdio.h>

int main() {
    char name[] = {"Kostya"};

    printf("With %%s formatter: %s\n", name);
    printf("With %%d formatter: %d\n", *name);
    printf("With %%x formatter: %x\n", *name);
    printf("With %%p formatter: %p\n", name);

    char c = 'c';
    printf("Size of char: %lu byte\n", sizeof(c));

    char* ptr_name = name;
    printf("With %%p formatter, next memory location: %p\n", ++ptr_name);

    return 0;
}