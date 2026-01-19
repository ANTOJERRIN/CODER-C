// calculator using c
/*#include <stdio.h>//linker section
#include <stdlib.h>//math header file
int add( a,  b)//function definitio
{
    return a+b;
}
int sub( a,b)
{
    return a-b;
}
int mul( a, b)
{
    return a*b;
}
int div(a, b)
{
    return a/b;
}
int main()
{
    int choice,a,b,result;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    printf("Choose operation:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&choice);
    while(1)
    {
        switch(choice)//
        {
            case 1://1
                result=add(a,b);
                printf("Result: %d\n",result);
                break;// -terminate case ,continue to next case
            case 2:
                result=sub(a,b);
                printf("Result: %d\n",result);
                break;
            case 3:
                result=mul(a,b);
                printf("Result: %d\n",result);
                break;
            case 4://
                if(b!=0)
                {
                    result=div(a,b);
                    printf("Result: %d\n",result);
                }
                else
                {
                    printf("Error: Division by zero! it is infinity\n");
                }
                break;
            default://nothing matches
                printf("Invalid choice!\n");
        }
        printf("Choose operation:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
        scanf("%d",&choice);
        if(choice==5)
        {
            break;
        }
    }

}*/
// Calculator using C
#include <stdio.h>

// Function definitions with proper parameter types
float add(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float mul(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

int main()
{
    int choice;
    float a, b, result;
    
    printf("=== Simple Calculator ===\n");
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    
    while(1)
    {
        printf("\nChoose operation:\n");// should be in loop to repeat
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);
        
        if(choice == 5)// before switch u inintial choice input 
        {
            printf("Thank you for using the calculator!\n");
            break;
        }
        
        switch(choice)
        {
            case 1:
                result = add(a, b);
                printf("Result: %.2f + %.2f = %.2f\n", a, b, result);
                break;
                
            case 2:
                result = sub(a, b);
                printf("Result: %.2f - %.2f = %.2f\n", a, b, result);
                break;
                
            case 3:
                result = mul(a, b);
                printf("Result: %.2f × %.2f = %.2f\n", a, b, result);
                break;
                
            case 4:
                if(b != 0)
                {
                    result = divide(a, b);
                    printf("Result: %.2f ÷ %.2f = %.2f\n", a, b, result);
                }
                else
                {
                    printf("Error: Division by zero is undefined!\n");
                }
                break;
                
            default:
                printf("Invalid choice! Please choose 1-5.\n");
        }
    }
    
    return 0;
}