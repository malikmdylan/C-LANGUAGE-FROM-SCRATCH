//add,sub,mul,div,mod using switch
#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Sum of %d and %d is %d", a, b, a + b);
        break;
    case 2:
        printf("Difference of %d and %d is %d", a, b, a - b);
        break;
    case 3:
        printf("Product of %d and %d is %d", a, b, a * b);
        break;
    case 4:
        printf("Division of %d and %d is %d", a, b, a / b);
        break;
    case 5:
        printf("Modulus of %d and %d is %d", a, b, a % b);
        break;
    default:
        printf("Invalid choice");
        break;
    }
    return 0;
}


