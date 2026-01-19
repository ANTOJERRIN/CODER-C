#include <stdio.h>

// Function to compute GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Compute and display GCD
    int result = gcd(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}
#include <stdio.h>

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Euclidean algorithm inside main
    int a = num1;
    int b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    // Output the result
    printf("GCD of %d and %d is %d\n", num1, num2, a);

    return 0;
}