// BABYLONIAN (HERON) METHOD - SQUARE ROOT USING A FUNCTION
// Formula used: Guess = 0.5 * (guess + n/guess)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double babylonian_sqrt(double n, double eps)
{
    if (n == 0.0) return 0.0;
    double guess = (n < 1.0) ? 1.0 : n / 2.0;
    double next;

    while (1) {
        next = 0.5 * (guess + n / guess); // Guess = 0.5 * (guess + n/guess)
        if (fabs(next - guess) < eps) break;
        guess = next;
    }

    return next;
}

int main(int argc, char *argv[])
{
    double n, eps = 1e-6;

    if (argc >= 2) {
        n = atof(argv[1]);
        if (argc >= 3) eps = atof(argv[2]);
    } else {
        printf("Enter a non-negative number: ");
        if (scanf("%lf", &n) != 1) return 1;
        printf("Enter tolerance (e.g. 1e-6): ");
        if (scanf("%lf", &eps) != 1) eps = 1e-6;
    }

    if (n < 0) {
        fprintf(stderr, "Error: negative number. Can't compute real square root.\n");
        return 1;
    }

    double result = babylonian_sqrt(n, eps);
    printf("Babylonian sqrt of %.10g ≈ %.10g\n", n, result);
    printf("C library sqrt = %.10g\n", sqrt(n));

    return 0;
}
