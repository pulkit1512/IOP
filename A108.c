// WITHOUT USING INBUILT STRING FUNCTIONS, PERFORM THE FOLLOWING IN C LANGUAGE:
// A. COPY ONE STRING INTO ANOTHER
// B. COMPARE TWO STRINGS
// C. CONCAT TWO STRINGS
// D. REVERSE A GIVEN STRING
#include <stdio.h>
int main()
{
    char s[100] = "I LOvE MY MOM AND DAD";

    char s2[100];
    int i = 0;
    // A
    while (s[i] != '\0')
    {
        s2[i] = s[i];
        i++;
    }
    puts(s2);

    // B
    #include<stdio.h>
int main(){

    char s1[100];
    printf("Enter the first string: ");
    scanf(" %[^\n]", s1);
    printf("String 1 = %s\n", s1);

    char s2[100];
    printf("Enter the second string: ");
    scanf(" %[^\n]", s2);
    printf("String 2 = %s\n", s2);

    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0')
    {
        printf("Strings are equal\n");
    }
    else if (s1[i] > s2[i])
    {
        printf("s1 is greater than s2\n");
    }
    else
    {
        printf("s2 is greater than s1\n");
    }
}
// CONCATE TWO STRINGS
#include <stdio.h>
    int main()
    {

        int l1 = 0, l2 = 0;
        char s1[200];
        printf("Enter the string 1=");
        scanf(" %[^\n]", s1);
        while (s1[l1] != '\0')
        {
            l1++;
        }

        char s2[200];
        printf("Enter the string 2=");
        scanf(" %[^\n]", s2);
        printf("\n");
        while (s2[l2] != '\0')
        {
            l2++;
        }

        for (int i = 0; i < l2; i++)
        {
            s1[l1 + i] = s2[i];
        }
        s1[l1 + l2] = '\0';
        printf("String after concatenation =%s", s1);
    }

    // REVERSE THE STRING
#include <stdio.h>
    int main()
    {
        char s1[100];
        printf("Enter the original string=");
        scanf(" %[^\n]", s1);
        printf(" Original string =%s\n", s1);

        char s2[100];
        int lenght = 0;
        while (s1[lenght] != '\0')
        {
            lenght++;
        }
        int i = 0;
        while (lenght > 0)
        {
            s2[i] = s1[lenght - 1];
            lenght--;
            i++;
        }
        s2[i] = '\0';
        printf("Reversed string=%s", s2);
    }
    
