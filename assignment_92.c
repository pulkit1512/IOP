#include<stdio.h>
#include<limits.h>
int main(){
    printf("enter n");
    int n, max = INT_MIN ;
    scanf("%i", &n);
    int arr[n];
    int *p;
    p = &arr[0];
    for(int i = 0; i<n;i++){
        scanf("%i", &arr[i]);
    }
    for(int i = 0; i<n;i++){
        if(*p>max ){
            max = *p;
        }
        p++;
    }
    printf("%i", max);
}