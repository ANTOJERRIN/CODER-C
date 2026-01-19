//wacp to do all arithemetic operations and do bubble sort the give numbers stored in the array
#include <stdio.h>
#include <math.h>
int in(){
    int n;
    printf("how many numbers u want to store:\n");
scanf("%d",&n);
return n;
}
void in_arr(int n,float a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("enter the element index at%d\n",i);
        scanf("%f",&a[i]);
    }
}
float fs(int n,float a[n])
{
    float s=0;
    for(int i=0;i<n;i++){
        s+=a[i];
    }
    return s;
}
float fa(int n,float a[n])
{  float s;
    s=fs(n,a);
    return (s/n);
    
    
}
 float sd1(int n,float a[n])
 {  float sd;
    float s=fs(n,a);
    float av=fa(n,a);
    for(int i=0;i<n;i++)
    {
      sd+=(a[i]-av)*(a[i]-av);

    }
    return sqrt(sd/n);
 }
 void out(int n,float a[n]){
    for(int i=0;i<n;i++){
        printf("elements are %.2f\n",a[i]);
    }
    printf("\n");
 }
 void bubbles(int n,float a[n]){
    float temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=a[j];
            }
           
        }
         out(n,a);
    }
 }
 int main(){
    int n;

    n=input();
    float a[n];
    in_arr(n,a);
    
    bubbles(n,a);
    out(n,a);
    return 0;

 }

