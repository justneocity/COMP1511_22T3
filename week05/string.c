#include <stdio.h>

// Manually prints out a string, one character at a time.
// Should behave like printf("%s\n");
void print_string(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");
}

int main (void) {
    char my_string[] =  "Hello";
    
    // char my_string2[10] = "Hello"

    print_string(my_string);
    return 0;
}
