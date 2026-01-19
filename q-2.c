// while loop using find the number is prime or not

#include <stdio.h>

int main()
{
    int isprime = 1; // assume number is prime initially
    int n, i = 2;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if(n<2)
    {
        isprime = 0; // numbers less than 2 are not prime
    }
    while(i<=n/2 && isprime==1) 
    {
        if(n%i==0)
        {
            isprime = 0; 
        }
        i++; 
    }
    
    if(isprime==1)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}
    

