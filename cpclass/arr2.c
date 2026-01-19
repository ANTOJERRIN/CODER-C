// 2d array multiplication matrix operation
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    int a[r1][c1], b[r2][c2], mul[r1][c2];
    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Error! column of first matrix must be equal to row of second.\n");
        return 0;
    }
    else{
        // Input first matrix
        printf("Enter elements of first matrix:\n");
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
                scanf("%d", &a[i][j]);
        // Input second matrix
        printf("Enter elements of second matrix:\n");
        for (i = 0; i < r2; i++)
            for (j = 0; j < c2; j++)
                scanf("%d", &b[i][j]);
        // Initialize result matrix to zero
        for (i = 0; i < r1; i++)
            for (j = 0; j < c2; j++)
                mul[i][j] = 0;
        // Multiply matrices
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                for (k = 0; k < c1; k++) {
                    mul[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        // Display result
        printf("Resultant Matrix:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
