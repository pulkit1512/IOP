// AN ENUMERATION WITH COLOR NAMES CAN BE USED IN A SWITCH STATEMENT TO DISPLAY THE HEXADECIMAL COLOR CODE.
#include <stdio.h>
/*An enum (short for "enumeration") is a user-defined data type in C that consists of a set of named integer constants. It is used to represent a collection of related values, making the code more readable and easier to maintain.*/
// Define an enumeration for colors
#include <stdio.h>

// Define an enumeration for colors
enum Color {
    RED = 0,      
    GREEN = 1,    
    BLUE = 2,     
    YELLOW = 3,   
};

// Function to print the hexadecimal color code based on the enum value
void displayColorCode(enum Color color) {
    switch (color) {
        case RED:
            printf("Red color code: #FF0000\n");
            break;
        case GREEN:
            printf("Green color code: #00FF00\n");
            break;
        case BLUE:
            printf("Blue color code: #0000FF\n");
            break;
        case YELLOW:
            printf("Yellow color code: #FFFF00\n");
            break;
    
        default:
            printf("Unknown color\n");
            break;
    }
}

int main() {
    enum Color selectedColor = BLUE; // Assigning the BLUE color
    displayColorCode(selectedColor);  // Display the color code for BLUE
    return 0;
}
