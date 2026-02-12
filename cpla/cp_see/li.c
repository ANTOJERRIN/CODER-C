#include <stdio.h>

int main() {
    int n,i,f;
    printf("enter the number:\n");
    scanf("%d",&n);
    int a[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);

        /* code */
    }
    int k;
    printf("enter the search elemtn:\n");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        if(a[i]==k){
            f=i;
            break;
        }
    }
    if(f==-1){
        printf("the elemnt is not found\n");
    }
    else{
        printf("the lemnt is found at %d\n",f);
    }
    
    return 0;
}
