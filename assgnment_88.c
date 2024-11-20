#include<stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr2[n];
    for(int i = 0; i<n;i++){
        printf("enter element\n");
        scanf("%i", &arr[i]);
    }
    int *p;
    for(int i = 0; i<n;i++){
        p = &arr[i];
        arr2[i] = *p;

    }
    printf("arr2 is:\n");
     for(int i = 0; i<n;i++){
        printf("%i\n", arr2[i]);
     }
}
