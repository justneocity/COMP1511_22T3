////////////////////////////////////////////
///                 STRUCTS              ///
////////////////////////////////////////////

/*
_______________________
|       STRUCTS        |
|_____________________ |
|                      |
|  LABELLED collection |
|                      |
|  variables can be    |
|  DIFFERENT types     |
_______________________|

*/

#include <stdio.h>

// STEP 1: DEFINITION   

// Example struct of a person with 3 fields
struct person {
    int shoe_size;
    double height;
    char first_name_initial;
};

struct person create_person(int shoe_size, int height, char first_name_initial) {
    // STEP 2: DECLARATION
    struct person new;/*               
       ⬇           ⬇
       type        name given to variable
    (of variable)*/  

    // STEP 3: INITIALISATION
    new.shoe_size = shoe_size;
    new.height = height;
    new.first_name_initial = first_name_initial;

    return new;

}

void print_person(struct person person) {
    printf("%d, %.3lf, %c\n", person.shoe_size, person.height, person.first_name_initial);
}

int main(void) {

    struct person alice = create_person(9, 170.0, 'a');
    print_person(alice);
    return 0; 
}


