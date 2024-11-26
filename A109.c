/*MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C
A. INITIALIZE THE POINTER WITH THE OTHER (A NORMAL VARIABLE WHOSE VALUE WE HAVE TO
MODIFY)*/
#include <stdio.h>

int main()
{
    int num = 10; // Declare a normal variable
    int *ptr;     // Declare a pointer variable

    // Initialize the pointer with the address of 'num'
    ptr = &num;

    // Print the original value of 'num'
    printf("Before modification, num = %d\n", num);

    // Modify the value of 'num' using the pointer
    *ptr = 25;

    // Print the modified value of 'num'
    printf("After modification, num = %d\n", num);

    return 0;
}
