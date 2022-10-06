#include <stdio.h>

struct colour {
    int red;
    int green;
    int blue;
};

int main(void) {

    // Make a colour
    struct colour my_colour = make_colour(100, 50 , 0);
    
    // print colour with highest value
    int highest = get_main_colour(my_colour);
    printf("%d\n", highest);
}

// Initialise a new struct with given colour values 
// returns the new structs
struct colour make_colour(int red, int green, int blue) {
    struct colour new_colour;

    new_colour.red = red;
    new_colour.green = green;
    new_colour.blue = blue;

    return new_colour;
}

// returns value of colour that is the highest
int get_main_colour(struct colour c) {
    if (c.red > c.green && c.red > c.blue) {
        return c.red;
    } else if (c.green > c.red && c.green > c.blue) {
        return c.green;
    } else if (c.blue > c.red && c.blue > c.green) {
        return c.blue;
    } else {
        return 0;
    }
}