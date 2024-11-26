//) WRITE A PROGRAM IN C TO PRINT ALL PERMUTATIONS OF A GIVEN STRING USING POINTERS. THE PERMUTATIONS
#include <stdio.h>
#include <string.h>

// Function to swap two characters in the string using pointers
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Recursive function to print all permutations of a string
void permute(char *str, int left, int right) //left=0 and right=strlen()-1
{
    if (left == right)
    {
        printf("%s\n", str); // Print the string when a permutation is complete
    }
    else
    {
        for (int i = left; i <= right; i++)
        {
            // Swap the current index with the left index
            swap((str + left), (str + i));

            // Recursively call for the next character
            permute(str, left + 1, right);

            // Backtrack and undo the swap
            swap((str + left), (str + i)); // Swap back
        }
    }
}

int main()
{
    char str[100];

    // Input the string
    printf("Enter the string: ");
    scanf("%s", str);

    int len = strlen(str);

    // Call the permutation function
    printf("All permutations of the string are:\n");
    permute(str, 0, len - 1);

    return 0;
}
