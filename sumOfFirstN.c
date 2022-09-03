//find sum of first n natural numbers
//BY MALIK M DYLAN
#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter number n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers is %d", n, sum);
    return 0;
}
