//same usign arrays finding sum of n numbers
#include <stdio.h>

/*
This program calculates the sum of n numbers entered by the user
It uses an array to store the numbers
*/

// Function to get the size of array from user
int input()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    return n;  // Returns how many numbers user wants to enter
}

// Function to fill the array with numbers from user
void input_array(int n, int a[n])
{
    for(int i = 0; i < n; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &a[i]);  // Store number at position i in array
    }
}

// Function to calculate sum of all array elements
int find_sum(int n, int a[n])
{
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];  // Add each array element to sum
    }
    return sum;  // Return total sum
}

// Function to display the result in nice format
void output(int n, int a[n], int sum) 
{
    // Print all numbers except last with + sign
    for(int i = 0; i < n - 1; i++) 
    {
        printf("%d + ", a[i]);
    }
    // Print last number and the sum
    printf("%d = %d\n", a[n-1], sum);
}

// Main function - program starts here
int main()
{
    int n, sum;
    
    // Step 1: Get how many numbers user wants to add
    n = input();
    
    // Step 2: Create an array of size n
    int a[n];
    
    // Step 3: Fill the array with numbers from user
    input_array(n, a);
    
    // Step 4: Calculate sum of all numbers
    sum = find_sum(n, a);
    
    // Step 5: Display the result
    output(n, a, sum);
    
    return 0;
}