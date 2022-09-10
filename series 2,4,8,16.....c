//print following series ;2,4,8,16,32,64,128,256,512,1024
#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", 2 * i);
    }
    return 0;
}
