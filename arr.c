//inputing and printing array elements
#include <stdio.h>
int main()
{ int n;
    int arr[n], i;
    printf("Enter  size of array: \n");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are: \n");
    printf("[");
    for(i=0; i<n; i++)
    { if(i<(n-1)){
        printf(" %d,", arr[i]);
    }
    else{
        printf(" %d", arr[i]);

    }
    
    }
    printf("]");
    return 0;
}