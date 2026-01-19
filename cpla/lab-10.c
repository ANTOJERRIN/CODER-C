//taylor series 
//e^x=1+x+x^2/2!+x^3/3!+x^4/4!+....+x^n/n!
#include <stdio.h>//linker section
#include <math.h>//math header file
int main()//main function
{
    int n,i;//declaring variables
    printf("enter the value of n:");
    scanf("%d",&n);//n->no of terms
    float x,sum=1,prod=1;//initializing values to resp variables
    printf("enter the value of x:");
    scanf("%f",&x);//value of x 
    for(i=1;i<n;i++)//for loop
    {
        prod*=i;//factorial calculation
        sum=sum+(pow(x,i)/prod);//the statement for taylors series
    }
    printf("the value of e^%.2f upto %d terms is %.4f",x,n,sum);//printing the result
    return 0;//successful termination
}
// lab comp means gcc command is gcc filename.c -lm
//execution command-./a.out-lm