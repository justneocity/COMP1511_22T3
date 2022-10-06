// An example program using arrays
// Written by COMP1511 Thu17A

#include <stdio.h>

int main(void) {

    // TODO: Create an array here
    int my_array[6] = {1, 0, -2, 5, 10, -5};
    // int my_array2[6] = { 0 };

    // my_array[0] = 1;
    // my_array[1] = 0;
    // my_array[2] = -2;
    // my_array[3] = 5;
    // my_array[4] = 10;
    // my_array[5] = -5;

    // TODO: Print the array
    int counter = 0;
    while (counter < 6) {
        printf("%d\n", my_array[counter]);
        counter++;
    }

    return 0;
}
