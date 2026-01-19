//print count of +ve and -ve numbers from n numbers- unit-3
#include <stdio.h>//linker directive
int main()
{
    int n,cpos=0,cneg=0,i,num;//intialization+declaration
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&num);//input
        if(num>=0)//check positive
            cpos++;
        else//check negative
            cneg++;
    }
    printf("Count of positive numbers: %d\n",cpos);//count pos
    printf("Count of negative numbers: %d\n",cneg);//count neg
    return 0;// syccessful termination
}