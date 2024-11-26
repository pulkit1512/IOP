// WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING POINTERS.FOR EXAMPLE, ST =”SVNITJAVA” IS COPIED AS “AVAJTINVS”
#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="SVNITIAN";
    char *str1=str;
    int l=strlen(str);
    char *str2=str+l-1;
    for (int i = 0; i <l/2; i++)
    {
        char c=*str1;
        *str1= *str2;
        *str2= c;
        *str1++;
        *str2--;
    }
    puts(str);
}