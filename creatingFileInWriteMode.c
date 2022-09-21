//create a file with the name file1.txt
#include <stdio.h>
int main()
{
    FILE *p;
    p=fopen("file1.txt","w");
    fprintf(p,"%d%s",21,"malik mubarak");
    fclose(p);
    return 0;
}