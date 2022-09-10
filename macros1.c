//use macros to find greatest of three numbers
#include<stdio.h>
#define greater(a,b) if (a>b) printf("%d is greater",a); else printf("%d is greater",b);
void main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    greater(a,b);
}

//MARCOS
