#include <stdio.h>
#include <stdlib.h>

// Factorial function for combination
long factorial(int n) {
    long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int main() { 
    while(1)
    {
    int choice;
    

    printf("Choose an option:\n");
   
    printf("1. Find GCD\n");
    printf("2. Calculate Combination (nCr)\n");
    printf("3. Generate Fibonacci Series\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    if(choice<=0)
    {
        printf("thank you\n");
        exit(0);
    }
    switch(choice){


    
    case 1:
     {//gcd
        int a, b;
        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);

        int temp;
        while (b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }
        printf("GCD is %d\n", a);

    } 
    break;
    case 2:
    {//combination
        int n, r;
        printf("Enter n and r (n >= r): ");
        scanf("%d %d", &n, &r);

        if (r > n || n < 0 || r < 0) {
            printf("Invalid input. Make sure n >= r and both are non-negative.\n");
        } else {
            long  nCr = factorial(n) / (factorial(r) * factorial(n - r));
            printf("Combination C(%d, %d) = %ld\n", n, r, nCr);
        }

    
   }  
    break;
   case 3: 
     {//fibonacci
        int terms;
        printf("Enter number of terms: ");
        scanf("%d", &terms);

        int a = 0, b = 1, next;
        printf("Fibonacci Series: ");
        for (int i = 0; i < terms; i++) {
            printf("%d ", a);
            next = a + b;
            a = b;
            b = next;
        }
        printf("\n");

    } 
    break;
    default:{
        printf("Invalid choice.\n");
    }
}

    return 0;
}
}
