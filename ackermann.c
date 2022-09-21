//write a code for ackermann function
#include <stdio.h>
int ackermann(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return ackermann(m - 1, 1);
    else
        return ackermann(m - 1, ackermann(m, n - 1));
}
int main()
{
    int m, n;
    printf("Enter the value of m and n: ");
    scanf("%d%d", &m, &n);
    printf("The value of A(%d,%d) is %d", m, n, ackermann(m, n));
    return 0;
}
