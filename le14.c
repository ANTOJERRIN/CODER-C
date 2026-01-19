#include<stdio.h>
int in()
{
    int n;
    printf("enter the no:\n");
    scanf("%d",&n);
    return n;
}
void arr(int n ,int a[n]){
    for(int i=0;i<n;i++){
        printf("element at index %d ",i);
        scanf("%d",a[i]);
        
    }
}
int lins(int n,int a[n],int k){
    for(int i=0;i<n;i++){
        if(k==a[i]){
            return i;
        }
    }
    return -1;
}
void out(int p,int k)
{
    if(p>=0){
        printf("element found at %d is %d\n",p,k);

    }
    else{
        printf("element not found at all\n");
    }
}


int main() {
    int n=in();
    int a[n];
    arr(n,a);
    int k=in();
    int p=lins(n,a,k);
    out(p,k);
    return 0;
}
