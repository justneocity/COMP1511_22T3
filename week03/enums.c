#include <stdio.h>

// STEP 1: DEFINITION
enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION,
};


/* This is the same as:

#define ADULT 0
#define STUDENT 1
#define CONCESSION 2

*/

int main(void) {

    // STEP 2: DECLARATION
    enum opal_card_type card_type;
    /*               
        ⬇                 ⬇
    type or variable     name given to variable */

    // STEP 3: INITIALISATION
    card_type = STUDENT;
    
}
