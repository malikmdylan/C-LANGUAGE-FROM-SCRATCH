//find max of two numbers using ternary operator
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    (a > b) ? printf("%d is greater than %d", a, b) : printf("%d is greater than %d", b, a);
    return 0;
}