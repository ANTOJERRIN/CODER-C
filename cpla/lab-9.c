//array of structures of students//documentation sector
#include <stdio.h>//klinkler section
int main()//mnain func
{
        typedef struct{       // struct plural tyhen we shuld typedef
        char name[20];//20-length
        char section[2];
        int roll;
    }student;//
    int n;
    //n times
    printf("enter the number of students:");//inputing no
    scanf("%d",&n);
    student s[n];//before instructing sturct to size tkae input of n var 
    for(int i=0;i<n;i++)//input user
    {
        printf("Enter the name:\n");//
        scanf("%s",s[i].name);
        printf("enter the section:\n");
        scanf("%s",s[i].section);
        printf("enter the roll number:\n");
        scanf("%d",&s[i].roll);

    }
    printf("credentials of students:\n");
    for(int i=0;i<n;i++)
    {
        printf("Name:%s\n",s[i].name);
        printf("section:%s\n",s[i].section);
        printf("roll number:%d\n",s[i].roll);
        
    }
    return 0;

        
    
    
    
}