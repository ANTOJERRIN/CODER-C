#include <stdio.h>

int main() {
    int i=1,n,s=0;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s+=i;
    }
    printf("the sum is %d\n",s);
    return 0;
}
