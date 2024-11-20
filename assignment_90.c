#include<stdio.h>
int main(void){
    char arr[100], *p;
    int spc = 0;
    fgets(arr, 100, stdin);
    p = &arr[0];
    while(*p != '\n'){
        p++;
        if(*p==' '){
            spc++;
        }
    }
    printf("length of string is:\t%i\n", (p-&arr[0]));
    printf("length of string without space is:\t%i", (p-&arr[0]-spc));
}