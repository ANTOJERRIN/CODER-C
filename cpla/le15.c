//recursion-means the fucnction calls on itslef
#include <stdio.h>
int fib(int n){
    
    
    if(n==2){
        return 1;
    }
    if(n>2){
        return fib(n-2)+fib(n-1);
    }
}

int main() {
    int n;
    printf("enter the number=\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("%d",fib(i));//main func calls on its own
        /* code */
    }
    

    return 0;
}
