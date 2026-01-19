#include <stdio.h>//linker section

int main()//main func
{
    int isprime = 1; // assume number is prime initially
    int n, i = 2;//initialising var and i=2 since prime no starts from2 
    
    printf("Enter the value of n: ");
    scanf("%d", &n);//inputing values
    
    if(n<2)//no below 2 are not a prime number
    {
        isprime = 0; // numbers less than 2 are not prime
    }
    while(i<=n/2 && isprime==1) //we are checking here that half of the number what we gave value as n and directky taking isprime=1
    {
        if(n%i==0)//factors 
        {
            isprime = 0; //if factors present then not a prime number
        }
        i++; 
    }
    
    if(isprime==1)//checking whether the number is prime or not
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}


