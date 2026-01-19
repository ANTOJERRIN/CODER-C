//prime number from unit-3
// first method
// while loop using find the number is prime or not

/*#include <stdio.h>

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
}*/
//second way is
/*// PROGRAM TO FIND WHETHER THE NUMBER IS PRIME NUMBER OR NOT
#include <stdio.h>// header file inclusion
// main function
int main()
{ 
    int n,flag=1;//declarting var plus assign a flag var for proving it is a prime number
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<2)//numbers less than 2 are not prime no
    {
        flag=0;//not a prime
    }
    else if(n>2)//checking prime no
    {
        for(int i=2;i*i<=n;i++)//loop from 2 to sqrt(n)-if n=3 4<=3 false-if n=9 9<=9 true
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
    return 0;
}*/
/*another way
#include <stdio.h>
#include <math.h> // to use sqrt()

int main() {
    int n, i;
    int isPrime = 1;  // 1 means true, 0 means false

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) {
        isPrime = 0;
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}*/
