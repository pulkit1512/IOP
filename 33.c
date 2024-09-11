#include <stdio.h>

int main() {
    int n, i, num, max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter a number: ");
    scanf("%d", &num);
    max = min = num;

    for (i = 1; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }

    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}

