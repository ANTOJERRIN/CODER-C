#include <stdio.h>
#include<math.h>
#include<limits.h>

int main()
 {
    int n,i;
    printf("enter the number :\n");
    scanf("%d",&n);
    int a[n];
    //inputing the array
    for(int i=0;i<n;i++)
    {
        printf("the index is%d is \n",i);
        scanf("%d",&a[i]);
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=i;
    }
    printf("the sum is %d",s);
    float mean=(float)s/n;
    printf("the mean is %f\n",mean);
    int l=a[0],s=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>l){
            l=a[i];
        }
        if(a[i]<s){
            s=a[i];

        }
    }
    printf("the laresd is %d\n",l);
    printf("the smallest %d\n",s);
    int sl=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=l){
            if(a[i]>sl){
                sl=a[i];
            }
        }
    }
    printf("the secodn large is %d\n",sl);
    


    return 0;
}
