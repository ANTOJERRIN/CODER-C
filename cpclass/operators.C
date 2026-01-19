// operators chapter 
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    c=(a>b)?printf("a is greater%d\n",a):(b>a)?printf("b is greater%d\n",b):printf("a and b are equal\n");
 return 0;
}
