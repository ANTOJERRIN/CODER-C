#include<stdio.h>
typedef struct{
    char n[20];
    int r;
    char sec[2];
}std;
int main()
{int n;
    printf("enter the number of students:");
    scanf("%d",&n);
    std s[n];
    for(int i=0;i<n;i++){
        printf("enter the name:");
        scanf("%s",s[i].n);
        printf("enter the section:");
        scanf("%c",&s[i].sec);
        printf("enter the rollno:");
        scanf("%d",&s[i].r);

    }
    printf("printing the values:");
    for(int i=0;i<n;i++)
    {
        printf("name=%s\n",s[i].n);;
        printf("sec=%c\n",s[i].sec);
        printf("rollno=%d\n",s[i].r);
    }
    return 0;
}
