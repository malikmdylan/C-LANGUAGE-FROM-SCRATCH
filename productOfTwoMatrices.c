//product of two matrices
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], product[10][10], r1, c1, r2, c2, i, j, k;
    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for second matrix: ");
    scanf("%d %d", &r2, &c2);
    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1 != r2)
    {
        printf("Error! column of first matrix not equal to row of second.");
        printf("Enter rows and column for first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d %d", &r2, &c2);
    }
    // Storing elements of first matrix.
    printf(" Enter elements of matrix 1: ");
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c1; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    // Storing elements of second matrix.
    printf(" Enter elements of matrix 2: ");
    for (i = 0; i < r2; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    // Initializing elements of matrix product to 0.
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            product[i][j] = 0;
        }
    }
    // Multiplying matrix a and b and storing in array product.
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            for (k = 0; k < c1; ++k)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // Displaying the product of two matrix.
    printf("Output Matrix:");
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            printf("%d ", product[i][j]);
            if (j == c2 - 1)
            {
                printf(" ");
            }
        }
        printf(" ");
    }
    return 0;
}