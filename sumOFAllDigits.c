// to find some of digits of an integer.
#include <stdio.h>
int main()
{
    int n, sum = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n /= 10;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}