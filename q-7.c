// using structures input and display students credential
#include <stdio.h>
int main()
{
    typedef struct{
        char sec[2];
        char n[20];
        int r;
    }student;
    int n;
    printf("enter the number of students studying enginnering cs(aiml):\n");
    scanf("%d",&n);
    student s[n];
    //inputing credentials from the user
    for(int i=0;i<n;i++)
    {
        printf("enter the name:\n");
        scanf("%s",s[i].n);
        printf("enter the section:\n");
        scanf("%s",s[i].sec);
        printf("enter the roll number:\n");
        scanf("%d",&s[i].r);



    }
    //displaying the credentials from the user
    for(int i=0;i<n;i++)
    {
        printf(" name:%s\n",s[i].n);
         printf(" section:%s\n",s[i].sec);
        printf(" roll number:%d\n",s[i].r);

        

 printf("\t%s\t%s\t%d\n",s[i].n,s[i].sec,s[i].r);

    }
   
    return 0;

}