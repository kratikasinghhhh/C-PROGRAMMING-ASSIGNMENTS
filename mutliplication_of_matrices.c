#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], result[10][10];
    int rows1, columns1, rows2, columns2;
    int i, j, k;

    // Input dimensions of first matrix
    printf("Enter rows and columns of First Matrix: ");
    scanf("%d %d", &rows1, &columns1);

    // Input dimensions of second matrix
    printf("Enter rows and columns of Second Matrix: ");
    scanf("%d %d", &rows2, &columns2);

    // Check if multiplication is possible
    if (columns1 != rows2)
    {
        printf("\nMatrix multiplication is not possible.\n");
        return 0;
    }

    // Input first matrix
    printf("\nEnter elements of First Matrix:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns1; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of Second Matrix:\n");
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix to 0
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            for (k = 0; k < columns1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display result
    printf("\nProduct of the two matrices is:\n");

    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}