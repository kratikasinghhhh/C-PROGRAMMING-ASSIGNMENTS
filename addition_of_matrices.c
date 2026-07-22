#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int rows, cols, i, j;

    // Input rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Input first matrix
    printf("\nEnter elements of First Matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of Second Matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Add matrices
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display result
    printf("\nSum of the two matrices is:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}