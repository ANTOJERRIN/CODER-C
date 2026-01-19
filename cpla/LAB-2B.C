#include<stdio.h>//linker section
#include<math.h>//math header file
int main()// main func
{
    float a,b,c,d,r1,r2,rp,imp,R;//declaring variables
    printf("enter the values of a,b,c =\n");
    scanf("%f%f%f",&a,&b,&c);
    d=pow(b,2)-4*a*c;//d=b^2-4ac d>0 real and distinct d<0 imaginary d=0 real and equal
    if(d>0)
    {
        printf("roots are real and distinct\n");
        r1=-b+sqrt(d)/2*a;//r=-b±√d/2a
        r2=-b-sqrt(d)/2*a;
        printf("root1=%f\n",r1);
        printf("root2=%f\n",r2);

    }
    else if(d<0)
    {
        printf("roots are imaginary\n");
        rp=-b/2*a;//r=-b/2a
        imp=sqrt(-d)/2*a;//imgp=sqrt(-d)/2a
        r1=rp+imp;
        r2=rp-imp;
        printf("root1=%f\n",r1);
        printf("root2=%f\n",r2);
    }
    else{
        printf("roots are real and equal\n");
        R=-b/2*a;//r=-b/2a
        printf("root=%f\n",R);

    }
    return 0;//succesful termination
    
    
}