//check if a string is a palindrome
#include <stdio.h>
int main()
{
    char a[100];
    int i,j;
    printf("Enter a string: ");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
    for(j=0;j<i/2;j++)
    {
        if(a[j]!=a[i-j-1])
        {
            printf("The string is not a palindrome");
            return 0;
        }
    }
    printf("The string is a palindrome");
    return 0;
}