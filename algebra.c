// ALGEBRA IN C 
//  main.c
//  
//
//  
//

#include <stdio.h>
int main()
{
    int num1, num2;
    int sum, sub, mult, mod;
    float div;
  
    /*
     * Read two numbers from user separated by comma
     */
    printf("Input any two numbers separated by comma : ");
    scanf("%d,%d", &num1, &num2);
  
    /*
     * Performs all arithmetic operations
     */
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;
    mod = num1 % num2;
  
    /*
     * Prints the result of all arithmetic operations
     */
    printf("The sum of the given numbers : %d\n", sum);
    printf("The difference of the given numbers : %d\n", sub);
    printf("The product of the given numbers : %d\n", mult);
    printf("The quotient of the given numbers : %f\n", div);
    printf("MODULUS = %d\n", mod);
  
    return 0;
}
