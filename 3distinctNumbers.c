//c code to compare any three integers(distinct or equal)
//BY MALIK M DYLAN


#include <stdio.h>
int main() {
   int a, b,c;
 printf("Enter number a,b,c : ");
    scanf("%d%d%d", &a,&b,&c);

   if(a > b && a > c)
      printf("a is largest ");
   else  if(b > a && b > c)
      printf("b is largest ");
    else  if(c > a && c > b)
      printf("c is largest ");
    else printf("No largest number found")  ;

   return 0;
}
