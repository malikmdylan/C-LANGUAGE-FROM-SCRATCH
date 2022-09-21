//sum of two matrices
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], sum[10][10], r, c, i, j;
    printf("Enter the number of rows (between 1 and 10): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 10): ");
    scanf("%d", &c);
    printf("Enter elements of 1st matrix:");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix:");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    // adding two matrices
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // printing the result
    printf("Sum of two matrices is:");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("%d ", sum[i][j]);
            if (j == c - 1)
            {
                printf(" ");

            }
        }
    }
    return 0;
}
