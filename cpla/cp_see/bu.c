#include <stdio.h>

int main() {
    int n,i;
    printf("enter the jumber\n");
    scanf("%d",&n);
    int a[n];
    //inputing
    for ( i = 0; i < n; i++)
    { printf("the lements are\n");
        scanf("%d",&a[i]);
        /* code */
    }
    int t,f=0;
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                f=1;
            }
        }

        if(f==0){
            printf("");
            break;
        }

    }
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);

    
    return 0;
}
