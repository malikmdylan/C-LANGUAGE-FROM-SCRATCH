//print a downward triangular pattern of stars,take input from user.
//BY MALIK MUBARAK
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
