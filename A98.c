// WRITE A C PROGRAM TO FIND THE PRODUCT OF 2 MATRICES USING POINTER USING DYNAMIC MEMORY ALLOCATION.
#include <stdio.h>
#include <stdlib.h>
void matrix(int **x, int rows, int col)
{
    printf("<let's begin element inserting in %d*%d matrix>\n", rows, col);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &x[i][j]);
        }
        printf("\n");
    }
    return;
}
int **multiplyMatrices(int **m1, int **m2, int rows, int col)
{
    // Allocate memory for the result matrix
    int **result = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        result[i] = (int *)malloc(col * sizeof(int));
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = 0; // Initialize element
            for (int k = 0; k < col; k++)
            {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
        return result;
    }
    int main()
    {
        int rows = 3, column = 3;
        // allocate memory for matrix
        int **m1 = (int **)malloc(rows * sizeof(int *));
        for (int i = 0; i < rows; i++)
        {
            m1[i] = (int *)malloc(column * sizeof(int));
        }
        int **m2 = (int **)malloc(rows * sizeof(int *));
        for (int i = 0; i < rows; i++)
        {
            m2[i] = (int *)malloc(column * sizeof(int));
        }
        matrix(m1, rows, column);
        matrix(m2, rows, column);
        int *answer = *multiplyMatrices(m1, m2, rows, column);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < col; j++)
            {
               printf("%d", answer[i][j]);
            }
            printf("\n");
        }
    }
}