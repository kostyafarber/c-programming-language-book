/*
* Reverse polish notation calculator
* In this notation each operator follows
* it's operand
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXOP 100
#define NUMBER '0'

int getop(char[]);
int push(double);
double pop(void);

int
main(int argc, char **argv) {
    int type;
    char s[MAXOP];
    double sec_op;

    while ((type = getop(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
            
            case '+':
                push(pop() + pop());
            
            case '-':
                sec_op = pop();
                push(pop() - sec_op);
                break;

            case '*':
                push(pop() * pop());
                break;

            case '/':
                sec_op = pop();
                push(pop() / sec_op);
                break;
            }
    }
    return 0;
}

#define MAXVAL 100

/* these are defined outside the functions because 
they are shared by both functions */
             
int sp = 0;
double val[MAXVAL];

int push(double f) {
    if (sp < MAXVAL) {
        val[sp++] = f;
    } else {
        printf("Not enough room on the stack\n");
    }
}

double pop(void) {
    if (sp > 0) {
        return val[sp--];
    } else {
        printf("Empty stack");
    }
}

#include <ctype.h>

int getch(void);
int ungetch(int);
void printop(void);
int duplicate(void);

int getop(char s[]) {
    int i, c;

    while ((s[0] = c = getchar()) == ' ' || c == '\t') {
        ;
    }
    s[1] = '\0';
    i = 0;
    if (!isdigit(c) && c != '.' && c != '-') {
        return c;
    }    
}