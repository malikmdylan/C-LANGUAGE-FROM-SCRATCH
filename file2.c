//create a file with the name file2.c and count the number of characters in the file
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int count=0;
    fp=fopen("file2.txt","r");
    while((ch=fgetc(fp))!=EOF)
    {
        count++;
    }
    printf("Number of characters in the file is %d",count);
    fclose(fp);
    return 0;
}