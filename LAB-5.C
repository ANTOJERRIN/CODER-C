// USING ARRAYS CONCEPT TO DO ARITHEMTIC OPERATIONS
#include <stdio.h>//linker section
int main()//main func
{
    int n;
    printf("no of times u want to do arithmetic operations: ");
    scanf("%d",&n);//taking input for n
    int a[n],s=0;//declaring array and sum variable
    //taking input in array
    for(int i=0;i<n;i++)
    {
        printf("number is =",a[i]);
        scanf("%d",&a[i]);
    }
    //doing sum operation
    for(int i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("sum of all numbers is = %d",s);
    
    return 0;
}