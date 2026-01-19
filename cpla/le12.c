#include <stdio.h>
#include<string.h>
struct student{
    char n[100];
    int age;

};
typedef struct student Student;
int input_n(){
    int n;
    printf("enter n:\n");
    scanf("%d",&n);
    return n;
}
Student input_student()
{
    Student s;
    printf("Enter student details:\n");
    scanf("%s%d",s.n,&s.age);
    return s;
}
void input_students(int n,Student s[n])
{
    for(int i=0;i<n;i++)
    {
        s[i]=input_student();
    }
}
 void bubblesort_by_sname(int n,Student s[n])
 {
    int f=0;
    Student temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-(i+1);j++)
        {
            if(strcmp(s[j].n,s[j+1].n)>0)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                f=1;
            }
        }
        if(f==0){
            break;
        }

    }
 }
 void bubblesort(int n,Student s[n])
 {
    int f=0;
    Student t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-(i+1);j++)
        {
            if(s[j].age>s[j+1].age)
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
                f=1;
            }
        }
        if(f==0)
        {
            break;
        }
    }


 }
 void outputstud(Student s){
    printf("%s%d\n",s.n,s.age);
 }
 void outstudents(int n,Student s[n]){
    printf("the sorted array is\n");
    for(int i=0;i<n;i++){
        outputstud(s[i]);

    }
 }


 
 int main() {
    int n=input_n();
    Student s[n];
    input_students(n,s);
    bubblesort_by_sname(n,s);
    bubblesort(n,s);
    outstudents(n,s);
    return 0;
 }
 