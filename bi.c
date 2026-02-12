#include <stdio.h>

int main() {
    int n,i;
    printf("enter the number :\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    int l,m,h;
    int k;
    printf("enter the element to be searched :\n");
    scanf("%d",&k);
    l=0,h=n-1;
    while(l<=h){
        m=(l+h)/2;
        if(a[m]==k){
            printf("the element is found at %d",m);
            return 0;
        }
        else if(a[m]>k){
            h=m-1;
        }
        else{
            l=m+1;
        }
    }
    return 0;
}
