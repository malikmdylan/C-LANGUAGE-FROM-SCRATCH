//add two numbers using function
#include<stdio.h>
int add(int a,int b);
int main()
{
int a,b,c;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
c=add(a,b);
printf("Sum=%d",c);
return 0;
}
int add(int a,int b)
{
int c;
c=a+b;
return c;
}

