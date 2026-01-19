//calculator program
#include <stdio.h>
#include <math.h>
float add(float a,float b)
{
    return a+b;
}
float sub(float a,float b)
{
    return a-b;
}
float mul(float a,float b)
{
    return a*b;
}
float div(float a,float b)
{
    return a/b;
}
float square(float a)
{
    return a*a;
}
float square_root(float a)
{
    return sqrt(a);
}
float cube(float a)
{
    return a*a*a;
}
int main(){
    printf(".........   Welcome to Jerrin's calculator!!!!.........\n");
    float a,b,result;int choice;
    printf("enter the two numbers defined as a and b:\n");
    scanf("%f%f",&a,&b);
    while(1){
        printf("Select the operation you want to perform:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Square\n6.Square Root\n7.Cube\n");
        scanf("%d",&choice);
        if(choice<1 || choice>7){
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }
        switch(choice)
        {
            case 1:
                result=add(a,b);
                printf("The sum of %.2f and %.2f is %.2f\n",a,b,result);
                break;
            case 2:
                result=sub(a,b);    
                printf("The difference of %.2f and %.2f is %.2f\n",a,b,result);
                break;
            case 3:
                result=mul(a,b);    
                printf("The product of %.2f and %.2f is %.2f\n",a,b,result);
                break;  
            case 4:
                if(b!=0){
                    result=div(a,b);    
                    printf("The division of %.2f by %.2f is %.2f\n",a,b,result);
                }
                else
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                result=square(a);    
                printf("The square of %.2f is %.2f\n",a,result);
                break;
            case 6:
                if(a>=0){
                    result=square_root(a);    
                    printf("The square root of %.2f is %.2f\n",a,result);
                }
                else
                {
                    printf("Error: Square root of negative number is not defined in real numbers.\n");
                }
                break;
            case 7:
                
                result=cube(a);    
                printf("The cube of %.2f is %.2f\n",a,result);
                break;
           
            
        }
   printf("\n");
    }
    return 0;
}