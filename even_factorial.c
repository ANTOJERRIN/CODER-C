// EVEN FACTORIAL PROGRAM not a lab program
#include <stdio.h>

int main()
{
    int n, i;
    long factorial = 1;
    
    printf("Enter an even number: ");
    scanf("%d", &n);
    
    // Check if number is even
    if(n % 2 != 0)
    {
        printf("Error: Please enter an even number!\n");
        return 1;
    }
    
    // Calculate factorial of even number
    for(i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    
    printf("Factorial of %d = %ld\n", n, factorial);
    
    return 0; // successful termination
}
