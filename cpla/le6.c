//2d array matrix operation using functions and pointers
#include <stdio.h>
 void get(int*m,int*n)
    {
        printf("Enter number of rows and columns: ");
        scanf("%d%d",m,n);
        
    }
    void input(int m,int n,int a[m][n])
    {
        printf("Enter matrix elements:\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    }
    void cal(int m,int n,int a[m][n],int b[m][n],int s[m][n],int d[m][n])
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                s[i][j]=a[i][j]+b[i][j];
             d[i][j]=a[i][j]-b[i][j];
            }
        }
    }
    void p(int m,int n,int a[m][n])
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    void pr(int m,int n,int s[m][n])
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            { printf("%d",&s[i][j]);
            }
            printf("\n");
        }

    }
    void pr1(int m,int n,int d[m][n])
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++){
                printf("%d",&d[i][j]);
            }
            printf("\n");
        }
    }
    int main()
    {
        int m,n;
        get(&m,&n);
        int a[m][n],b[m][n],s[m][n],d[m][n];
        input(a,m,n);
        input(b,m,n);
        cal(a,b,s,d,m,n);
        printf("Sum of matrices:\n");
        pr(m,n,s);
        printf("Difference of matrices:\n");
        pr1(m,n,d);
        return 0;
    }
