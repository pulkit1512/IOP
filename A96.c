// WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING POINTERS.
#include <stdio.h>
#include <string.h>
void sortstrings(char *x[], int n)
{
    char *temp;
    // we use bubble sort algorithm to sort the strings in ascending order

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(x[j], x[j + 1]) > 0) // if x[j]>x[j+1] then strcpy return positive value
            {
                // swap the strings pointers
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    return;
}
int main()
{
    int no;
    printf("<enter number of string you want to enter>");
    scanf("%d", &no);
    char str[100]; // temporary string array to store string
    char *m[no];
    for (int i = 0; i < no; i++)
    {
        /*arr[i] = (char *)malloc(strlen(buffer) + 1); // Allocate memory manually
        if (arr[i] == NULL) {
            printf("Memory allocation failed\n");
            exit(1);
        }
        strcpy(arr[i], buffer); // Copy the string into allocated memory*/
        printf("\n<enter the string->");
        scanf("%s", str);
        m[i] = strdup(str);
    }
    sortstrings(m, no);
    printf("\n < After sorting of strings in the ascending order >");
    for (int i = 0; i < no; i++)
    {
        printf("\n%s", m[i]);
    }
    return 0;
}
