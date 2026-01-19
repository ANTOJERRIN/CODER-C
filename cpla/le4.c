// Square root of number using babylonian method.
#include <stdio.h>

// Function to calculate square root using Babylonian method
float babylonianSqrt(float number) {
    float guess = number / 2.0;
    float epsilon = 0.00001;
    float new_guess;
    int step = 1;

    printf("\n--- Iteration Steps ---\n");

    do {
        new_guess = (guess + number / guess) / 2;
        printf("Step %d: guess = %.5f\n", step, new_guess);
        step++;
        if (new_guess == guess) break;  // If guess doesn't change, stop
        guess = new_guess;
    } while ((guess * guess - number > epsilon) || (number - guess * guess > epsilon));

    return guess;
}

int main() {
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num < 0) {
        printf("Square root of negative number is not real.\n");
    } else {
        float result = babylonianSqrt(num);
        printf("\nFinal square root of %.5f is approximately %.5f\n", num, result);
    }

    return 0;
}
