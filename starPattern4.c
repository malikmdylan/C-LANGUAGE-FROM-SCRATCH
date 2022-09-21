//print following star pattern : ***
//                               ****
//                               *****
//                               ******
#include<stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 6; j++)
        {
            if (j <= i + 2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}