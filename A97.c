// WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER.
#include <stdio.h>
int main()
{
    char c[200];
    char *ptr;
    ptr = c;

    printf("Enter string=");
    fgets(c, sizeof(c), stdin);
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
        {
            count++;
        }
        ptr++;
    }
    printf("Number of vowels=%d", count);
}