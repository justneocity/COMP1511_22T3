#include <stdio.h>

enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION,
};

struct person {
    int shoe_size;
    double height;
    char first_name_initial;
    enum opal_card_type type;
};

struct person create_person(int shoe_size, int height, char first_name_initial) {
    struct person new;             
   
    new.shoe_size = shoe_size;
    new.height = height;
    new.first_name_initial = first_name_initial;
    new.type = STUDENT;

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


