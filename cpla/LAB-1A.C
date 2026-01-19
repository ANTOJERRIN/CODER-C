// OPERATIONS PROGRAM
#include <stdio.h>//linker section
int main()//main function
{
    int a,b,sum,sub,mul,mod;//variable declaration
    float div;//variable declaration
    printf("Enter the first number=");//
    scanf("%d",&a);
    printf("enter the second number=");
    scanf("%d",&b);
    sum=a+b;//arithmetic operations
    sub=a-b;
    mul=a*b;
    mod=a%b;
    div=(float)a/b;//explicit cast operator
    printf("sum of a and b =%d\n",sum);
    printf("subtraction of a and b=%d\n",sub);
    printf("multiplication of a and b=%d\n",mul);
    printf("modulus of a and b=%d\n",mod);
    printf("division of a and b=%.2f\n",div);
    return 0;//successful termination
}
