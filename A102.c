// WRITE A  C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int chara = 0, words = 0, lines = 0;
    char ch;
    char filename[100];
    printf("Enter the name of the file: ");
    scanf("%s", filename);
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("<file does not open>");
    }
    int in_word = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        chara++;
        if (ch == '\n')
        {
            lines++;
        }
        else if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r')
        {
            if (in_word)
            {
                words++;
                in_word = 0; // end of the word
            }
        }
        else
            {
                in_word = 1; // inside the word
            }
    }
    if (in_word)
    {
        words++;
    }
    fclose(file);
    // print results
    printf("\nCHARACTERS->%d", chara);
    printf("\nLINE->%d", lines);
    printf("\nWORDS->%d", words);
    return 0;
}