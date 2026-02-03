#include<stdio.h>
int main()
{
  int isprime=1;
  int n,i=2;
    printf("enter the number :\n ");
    scanf("%d",&n);
    if(n<2)
    {
        isprime=0;
    }
    while(i<=n/2 && isprime==1)
        {
            if(n%i==0)
            {
                isprime=0;
            }
            i++;
        }
    
    if(isprime==1)
    {
        printf("%d is a prime number\n",i);
    }
    else
    {
        printf("%d is not a prime number\n",i);
    }
    return 0;
}