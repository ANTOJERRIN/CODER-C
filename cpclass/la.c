//to find largest of n numbers udsing looping contruct-unit-3
#include <stdio.h>
int main() {
    int n, i;
    float num, largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for the number of elements.\n");
        return 1;
    }

    
    for (i = 0; i < n; i++) {
        printf("Enter number : ",i+1);// taking input using for loop i+1 use
    scanf("%f", &num);
     
        if (num > largest) {
            largest = num;// initialising value of num to largest
        }
    }

    printf("The largest number is: %.2f\n", largest);
    return 0;//successful termination
}