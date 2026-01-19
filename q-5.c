// 2d array to do add ,sub problems
#include <stdio.h>// linker section
int main()//main function
{
    int m,n;//size of the array 2d
    printf("enter the values of m and n:\n");//inputing rows and columns for the 2d array
    scanf("%d%d",&m,&n);//inputing the sixe of 2d array
    int i,j,a[m][n],b[m][n],c[m][n],s[m][n],d[m][n];
    
    //first matrix input
    printf("printing elements 'first matrix':\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("element a[%d][%d]:\n",i,j);
            scanf("%d",&a[i][j]);
        }

    }
    //second matrix input
    printf("printing elements 'second matrix':\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("element b[%d][%d]:\n",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    // third matrix addition
    printf("printing elements 'third matrix':\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("element c[%d][%d]:\n",i,j);
            scanf("%d",&c[i][j]);
        }
    }

    // addition of first ,second and third matrix and even difference of first and second matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            s[i][j]=a[i][j]+b[i][j]+c[i][j];
           
            
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            d[i][j]=a[i][j]-b[i][j]-c[i][j];
           
            
        }
    }
    //printing addition and subtraction matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d",s[i][j]);
            

        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d",d[i][j]);
            

        }
        printf("\n");
    }
    return 0;
}