#include <stdio.h>

int main() {
    int n;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("array elements:\n");
        scanf("%d",&a[i]);
    }
    printf("sorting array:\n");
    int temp,flag=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++)
        {
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
            
        }
        if(flag==0)
        {
         printf("");
            break;
        }
    }
    //sorted array
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}
