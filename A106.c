/*CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY, 
PRICE AND 
AMOUNT. IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND 
PRICE AS 
INPUT AND CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT.*/

#include <stdio.h>
typedef struct ITEM
{
    char ITEM_NAME[100];
    int QUANTITY;
    float PRICE;
    float AMOUNT;

} item;

int read(item items)
{

    printf("Enter item name=");
    scanf("%[^\n]", items.ITEM_NAME);

    printf("\n");
    printf("Enter quantity=");
    scanf("%d", &items.QUANTITY);
    printf("\n");
    printf("Enter price=");
    scanf("%f", &items.PRICE);
    printf("\n");
    items.AMOUNT = items.QUANTITY * items.PRICE;
    printf("\nItem Details:\n");
    printf("Name: %s\n", items.ITEM_NAME);
    printf("Quantity: %d\n", items.QUANTITY);
    printf("Price: %f\n", items.PRICE);
    printf("Amount: %f\n", items.AMOUNT);
}

int main()
{
    item items;

    read(items);
}
