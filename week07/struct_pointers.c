#include <stdio.h>

struct person {
    int num;
};

void swap_numbers(struct person *member1, struct person *member2);

int main(void) {

    // Create 2 people
    struct person person1;
    person1.num = 1;
    struct person person2;
    person2.num = 2;

    // Print numbers
    printf("Person1 Number: %d\n", person1.num);
    printf("Person2 Number: %d\n", person2.num);

    // Swap Numbers
    swap_numbers(&person1, &person2);
    printf("Swapped:\n");

    // Print numbers again
    printf("Person1 Number: %d\n", person1.num);
    printf("Person2 Number: %d\n", person2.num);

    return 0;
}

// Swaps the numbers of each struct
void swap_numbers(struct person *member1, struct person *member2) {
    int temp_num = member1->num;

    member1->num = member2->num;
    (*member2).num = temp_num;
}