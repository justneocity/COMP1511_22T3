#include <stdio.h>

#define SIZE 4

// A
void a(void) {
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) { // row = 1 , col = 1
            if (row == col) {
                printf("O");
            } else {
                printf("X");

            }
            col++;
        }
        row++;
        printf("\n");
    }
}

// B
void b(void) {
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            if (col % 2 == 0) { // col = 0
                printf("O");
            } else {
                printf("X");

            }
            col++;
        }
        row++;
        printf("\n");
    }
}

// C
void c(void) {
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            if (col != 1 && row != ) { // row = 2, col = 1
                printf("O");
            } else {
                printf("X");

            }
            col++;
        }
        row++;
        printf("\n");
    }
}

// D
void d(void) {
    int row = 0;
    while (row < SIZE) {
        printf("X");
        int col = 1;
            if (row == 0 || row == 3) { // row = 3 col = 1
                printf("X");
            } else {
                printf("O");
            }
            col++;
        }
        printf("X");
        row++;
        printf("\n");
    }
}

int main(void) {
    // A
    a();
    // B
    
    // C

    // D
    return 0;
}