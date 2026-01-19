//file handling in c
#include <stdio.h>

int main()
{
    FILE *fp;
    char a[50];
    fp = fopen("d.txt","r");
    fscanf(fp,"%s",a);
    printf("%s",a);
    fclose(fp);
    fp = fopen("d.txt","a");
    fprintf(fp,"LIfe is beautiful\n");
    return 0;
}