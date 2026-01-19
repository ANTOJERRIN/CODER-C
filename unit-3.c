//control flow in c programming
//for ,while,do-while-iteration statements
//break,continue,return,goto-unconditional/jump statements
/*for(ini st;cond st;upd st)
{ statements
} for-user knows how many times have to be repeated 
 while-user doesnt know how many times to be repeated*/
 // wacp to print numbers from 1 to n using for loop
 #include <stdio.h>
 int main()
 {
    /*int n,i=1,s;
    printf("value of n:\n");
    scanf("%d",&n);
    for(;i<n;i++){
        printf("\n%d",i+1);
        s+=i;
    }printf("\nsum is:%d",s);
    return 0;*/

    /*//TO FIND SUM OF NUMBERS FROM 1 TO N
#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    //taking input form the user
    printf("enter the vlaue of n:");
    scanf("%d",&n);
    /*while(i<=n)
    {
        sum=sum+i;
        i++;

    }
    printf("the sum of numbers from 1 to %d is %d",n,sum);
    for(;i<=n;i++)
    {
        sum+=i;
    }
    printf("the sum of numbers from 1 to %d is %d",n,sum);
    return 0;*/
    // wacp to print numbers in reverse 
    /*int n;
    printf("n:\n");
    scanf("%d",&n);
    int i=n;
    for(;i>0;i--)
    {
        printf("\n%d",i);

    }
    return 0;*/
   
    // read and display n numbers from user
    int n;
    printf("n:\n");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        printf("enter the number:\n",i+1);
        int num;
        scanf("%d",&num);
        printf("number %d is :%d\n",i+1,num);
    }
    return 0;
   //taylor series 
//e^x=1+x+x^2/2!+x^3/3!+x^4/4!+....+x^n/n!
/*#include <stdio.h>//linker section
#include <math.h>//math header file
int main()
{
    int n,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    float x,sum=1,prod=1;//initializing values to resp variables
    printf("enter the value of x:");
    scanf("%f",&x);
    for(i=1;i<=n;i++)//for loop
    {
        prod*=i;
        sum=sum+(pow(x,i)/prod);//the statement for taylors series
    }
    printf("the value of e^%.2f upto %d terms is %.4f",x,n,sum);
    return 0;//successful termination*/
}



    
 