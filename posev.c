#include <stdio.h>

int main() {
    int n,i;
    printf("value of n=\n");
    scanf("%d",&n);
    if(n>0){
        if(n%2==0)
        {
            printf("even and positivew number\n",n);
        }
        else 
        {
            printf("odd numberand positive number\n",n);
        }
        
    }
    return 0;
}
