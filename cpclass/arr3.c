// 2d array multiplication matrix operation
#include <stdio.h>
int main()
{
    int r1,r2,c1,c2,r3,c3,i,j,k;
    printf("rows and columns of first matrix:\n");
    scanf("%d%d",&r1,&c1);
    printf("rows and columns of second matrix:\n");
    scanf("%d%d",&r2,&c2);
    printf("rows and columns of third matrix:\n");
scanf("%d%d",&r3,&c3);
    int a[r1][c1],b[r2][c2],c[r3][c3],mul[r1][c2];
    if(c1==r2 && c2==r3)
    {
        printf("enter the elements of first natrix:\n");
        for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]); 
        }
        

    }
     printf("enter the elements of first natrix:\n");
        for(i=0;i<r1;i++)
    { printf("[");
        for(j=0;j<c1;j++)
        {
            printf("%d",a[i][j]); 
        }
        printf("]\n");

    }
    printf("enter the elements of second natrix:\n");
        for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&b[i][j]);
        }
        

    }
    printf("enter the elements of second natrix:\n");
        for(i=0;i<r1;i++)
    {printf("[");
        for(j=0;j<c1;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("]\n");

    }
     printf("enter the elements of third natrix:\n");
        for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
        
    
    printf("enter the elements of third natrix:\n");
        for(i=0;i<r1;i++)
    {printf("[");
        for(j=0;j<c1;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("]\n");

    }
   //initialse mul 
   for(i=0;i<r1;i++)
   {
    for(j=0;j<c2;j++)
    {
        mul[i][j]=0;
    }
   }
   //multiply a and b
   for(i=0;i<r1;i++)
   {
    for(j=0;j<c2;j++)
    {
        for(k=0;k<c1;k++)
        {
            mul[i][j]+=a[i][k]*b[k][j];
        }


    }

}
//mult mul and c
int f[r1][c3];
for(i=0;i<r1;i++)
{
    for(j=0;j<c3;j++)
    {
        f[i][j]=0;
        for(k=0;k<c2;k++)
        {
            f[i][j]+=mul[i][k]*c[k][j];
    }
}
    }
    printf("resultant matrix after multiplying three matrices:\n");
    for(i=0;i<r1;i++)
    {printf("[");
        for(j=0;j<c3;j++)
        {
            printf("%d ",f[i][j]);
        }
        printf("]\n");
    }
    }
else
{
    printf("matrix multiplication not possible\n");
    return 0;
}
return 0;

}
