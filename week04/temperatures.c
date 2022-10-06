// An example program to scan in arrays using a loop
// Written by COMP1511 Thu17A

#include <stdio.h>

#define ARR_SIZE 7

int main(void) {

    // Declare and initialise array to 0
    int temps[ARR_SIZE] = {0};

    // scan in 7 values
    for (int i = 0; i < ARR_SIZE; i++) {
        scanf("%d", &temps[i]);
    }

    // calculate average
    // sum / size

    // calculate sum
    double sum = 0;
    for (int j = 0; j < ARR_SIZE; j++) {
        sum = sum + temps[j];
        // sum += temp[j];
    }

    double average = sum / ARR_SIZE;
    
    // print out average
    printf("Average is %.2lf\n", average);

    return 0;
}