#include<stdio.h>
int main(){int n, *p = &n;scanf("%i", &n);printf("cube is: %i\nsquare is: %i", (*p)*(*p)*(*p), (*p)*(*p));  }
