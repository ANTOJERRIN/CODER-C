#include <stdio.h>

/*
This program calculates the sum of first n natural numbers
For example: if n=5, it calculates 1+2+3+4+5 = 15
*/

// Function to get the value of n from user
int input()
{ 
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);  // Use &n to get address of n
    return n;  // Return the value to main
}

// Function to calculate sum of numbers from 1 to n
int sum(int n)
{
    int s = 0;
    for(int i = 1; i <= n; i++)  // Start from 1, go up to n (inclusive)
    {
        s += i;  // Add each number to sum
    }
    return s;  // Return the calculated sum
}

// Function to display the result
void output(int n, int s)
{
    // Print numbers with + signs
    for(int i = 1; i < n; i++)  // Start from 1
    {
        printf("%d + ", i);
    }
    printf("%d = %d\n", n, s);  // Print last number and sum
}

// Main function
int main()
{
    int n, s;
    
    // Step 1: Get input from user
    n = input();
    
    // Step 2: Calculate the sum
    s = sum(n);
    
    // Step 3: Display the result
    output(n, s);
    
    return 0;
}