//add n natural numbers using recursion
#include <stdio.h>
int add(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + add(n - 1);
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is %d", n, add(n));
    return 0;
}
