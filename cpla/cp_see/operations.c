#include<stdio.h>
int main()
{
    int a,b,s,d,mod,m,ad;
    float di;
    printf("enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    ad=a+b;
    s=a-b;
    m=a*b;
    mod=a%b;
    di=(float)a/b;
    printf("add:%d\n",ad);
    printf("sub=%d\n",s);
    printf("mul=%d\n",m);
    printf("div=%d\n",di);
    printf("modulus=%d\n",mod);
    return 0;
}