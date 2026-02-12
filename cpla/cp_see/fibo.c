#include <stdio.h>
int f(int n){
    if(n==2){
        return 1;
    }
    if(n>2){
        return f(n-2)+f(n-1);
    }
}

int main() {
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d",f(i));
    }
    return 0;
}
