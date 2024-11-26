// WRITE A  C PROGRAM TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF TWO GIVEN NUMBERS.
#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int main()
{
    int n1, n2;
    printf("<enter the first number->");
    scanf("%d", &n1);
    printf("\n<enter the second number->");
    scanf("%d", &n2);
    printf("\nlargest of two number is->%d", MAX(n1,n2));

    return 0;
}