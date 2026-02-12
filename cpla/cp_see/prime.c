#include <stdio.h>

int main() {
    int i=2,ip=1,n;
    printf("enter the number\n");
    scanf("%d",&n);
    if(n<2){
        ip=0;
    }
    
        while( i<=n/2 && ip==1){
            if(n%i==0)
            {
                ip=0;
                
            }
            i++;
        }
        if(ip==1){
            printf("the number is aprime number %d\n",n);

        }
        else{
            printf("the number is not a prime numbner %d\n",n);
        }
        return 0;
    
    
}
