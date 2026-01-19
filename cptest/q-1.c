//for loop to find sum of numbers
#include <stdio.h>//linker section
int main()//main function
{
    int n,i=1,sum=0;//initialsing variables
    printf("enter the value of n:");
    scanf("%d",&n);//taking input from the user
    for(;i<=n;i++)
     { sum+=i;
      }
    printf("sum of first %d numbers is %d\n",n,sum);//printing the sum
    return 0;//succcessful termination

}
