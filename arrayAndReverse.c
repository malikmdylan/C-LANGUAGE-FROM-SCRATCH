//code to take an array from user and
#include <stdio.h>
int main()
{
    int i, n, x, flag = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<=n-1;i++) 
    {
        printf("%d",a[i]);
    }
    printf("\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
