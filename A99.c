// WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS PRESENT IN THE FILE.
#include <stdio.h>
int main()
{
    FILE *p = fopen("file.txt", "r");
    int count = 0;
    char str[1000];
    fgets(str, 1000, p); // fgets(string_name,no_of_char_read,file_pointer)
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
        i++;
    }
    printf("%d", count);
}