//array-sum,mean,largest,smallest,2nd largest,standard deviation
#include <stdio.h>//header file
#include <math.h>//math header file
#include <limits.h>//limits header file--for INT_MIN(why means smallest number in int datatype)
int main()//main function
{
    int n,i;//declaration of variables
    int sum=0;float mean,sd=0;//declaration of variables(mainly for mean and standard deviation)
    //input size of array
    printf("enter the size of array:");
    scanf("%d",&n);//input size of array
    int a[n];//declaration of array
    //input elements of array
    for(i=0;i<n;i++)//loop for input
    {
        printf("inputs are");
        scanf("%d",&a[i]);
    }
    //sum of array
    for(i=0;i<n;i++)//loop for sum
    {
        sum+=a[i];//sum operation
    }
    printf("sum of array is=%d\n",sum);
    //mean of array
    mean=(float)sum/n;//mean operation
    printf("mean of array is=%.2f\n",mean);
    //largest and smallest element
    int l=a[0],s=a[0],sl;  //initialization of largest and smallest element
    for(i=1;i<n;i++)
    {
        if(a[i]>l)//condition for largest element
        {
            l=a[i];
        }
        if(a[i]<s)//condition for smallest element
        {
            s=a[i];
        }
        
        
    }
    printf("largest element is=%d\n",l);
    printf("smallest element is=%d\n",s);//printing largest and smallest element
    //second largest element
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