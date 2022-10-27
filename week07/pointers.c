// Basic Pointers Exercise
// Written by THUR17C
// on 27/10/22

#include <stdio.h>

int main(void) {

    int n = 42;
    int *p;
    int *q;
    p = &n;

    // print current value of n
    printf("the value of n is %d\n", n);
    printf("the value of p is %p\n", p);

    *p = 5;

    printf("the changed value of n is %d\n", n);

    // *q = 17;
    q = p;
    printf("the value of q is %p\n", q);
    *q = 8;
    printf("the changed value of n is %d\n", n);

    return 0;
}