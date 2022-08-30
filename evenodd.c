//check if number is even or odd
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("The number %d is even",n);
    }
    else
    {
        printf("The number %d is odd",n);
    }
    return 0;
}