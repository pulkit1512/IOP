#include <stdio.h>

int main() {
    int n, i, max1 = -1, max2 = -1, num;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max2 = num;
        }
    }

    printf("Max: %d, Second Max: %d\n", max1, max2);
    return 0;
}

