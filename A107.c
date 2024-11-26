// IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS LAST N DIGITS
#include <stdio.h>
#include <math.h>
int flip(int x, int y)
{
    int count = 0;
    int number = 0;
    int num2 = 0;
    int power = pow(10, y);
    int rem = number % power;
    printf("%d\n", rem);
    num2 = rem;
    number = number - num2;
    int num3 = 0;
    while (num2 != 0)
    {
        int rem = num2 % 10;
        num3 = num3 * 10 + rem;
        num2 = num2 / 10;
    }
    int number4 = number + num3;
    printf("%d", number4);
    return number4;
}

int main()
{
    int number, digit, num2 = 0;
    printf("rnter the number:");
    scanf("%d", &number);
    printf("\nenter the flip digit:");
    scanf("%d", &digit);
    int power = pow(10, digit);
    int rem = number % power;
    printf("%d\n", rem);
    num2 = rem;
    number = number - num2;
    int num3 = 0;
    while (num2 != 0)
    {
        int rem = num2 % 10;
        num3 = num3 * 10 + rem;
        num2 = num2 / 10;
    }
    int number4 = number + num3;
    printf("\n%d", number4);
}
