//print even series.
//CREATED BY MALIK MUBARAK
#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}
