//array-sum,mean,largest,smallest,2nd largest,standard deviation
#include <stdio.h>
#include <math.h>
#include<limits.h>
int main()
{
    int n,i;
    int sum=0;float mean,sd=0;
    //input size of array
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("inputs are");
        scanf("%d",&a[i]);
    }
    //sum of array
    for(i=0;i<n;i++)
    {
        sum+=a[i];//sum operation
    }
    printf("sum of array is=%d\n",sum);
    //mean of array
    mean=(float)sum/n;
    printf("mean of array is=%.2f\n",mean);
    //largest and smallest element
    int l=a[0],s=a[0],sl=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
        }
        if(a[i]<s)
        {
            s=a[i];
        }
        
        
    }

    printf("largest element is=%d\n",l);
    printf("smallest element is=%d\n",s);
    sl=INT_MIN;
    sl=INT_MIN;//second largest initialization to the smallest number in int datatype
    for(i=0;i<n;i++)
    {
        if(a[i]!=l)//condition to check element is not equal to largest element
        {  if(a[i]>sl)//condition for second largest element
            sl=a[i];//intialising to sl varibale    

        }

    }
    printf("second largest element is=%d\n",sl);
    //standard deviation
    for(i=0;i<n;i++)
    {
        sd+=pow(a[i]-mean,2);
    }
    sd=sqrt(sd/(n-1));
    printf("standard deviation is=%.2f\n",sd);
    return 0;

    


}