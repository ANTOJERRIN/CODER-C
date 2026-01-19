// wacp to form 2d array and perform add,sub problems;//documentation section
#include <stdio.h>// matrices addition and subtraction//linker section
int main()//main function
{
    int m,n;//size of the matrix 3 3 2 2 1 2
    printf("enter the number of r and c:");//size 
    scanf("%d%d",&m,&n);//inputing val
    int a[m][n],b[m][n],s[m][n],d[m][n];//[]
    printf("first matrix:\n");
    //int i=0 ,j=0 loop variables should be declared inside the loop
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("second matrix:\n");
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }

    }
    //add ,sub ;
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
           // d[i][j]=a[i][j]-b[i][j];
        }
    }
    //print add ,sub ;
    printf("sum matrix:\n");
      
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
    /*printf("diff matrix:\n");
    i=0,j=0;  
    for(;i<m;i++)//once
    {
        for(;j<n;j++)//finish
        {
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }   */
    return 0;


}