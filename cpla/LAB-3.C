//TO FIND SUM OF NUMBERS FROM 1 TO N
#include<stdio.h>//linker sdection
int main()//main fuc
{
    int i=1,n,sum=0;//assign plus variable declaration
    //taking input form the user
    printf("enter the vlaue of n:");
    scanf("%d",&n);//taking input 
    /*while(i<=n)
    {
        sum=sum+i;
        i++;

    }
    printf("the sum of numbers from 1 to %d is %d",n,sum);*/
    for(;i<=n;++i)//for loop
    {
        sum+=i;
    }
    printf("the sum of numbers from 1 to %d is %d",n,sum);//1 to n ,sum
    return 0;//succesful termination
}