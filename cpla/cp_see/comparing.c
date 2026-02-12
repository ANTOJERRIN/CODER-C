#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    //comparing the numbers-a and b
    if(a>b){
        printf("the largest is %d\n",a);
    }
    else if(b>a){
        printf("the largest is %d\n",b);

    }
    else{
        printf("both the numbers are equal\n");
    }
    //comapring the numbers with a,b,c
    /*if(a>b){
        if(a>c){
            printf("the largest number is %d\n",a);

        }
        else{
            if(b>c){
                printf("the largest number is %d\n ",b);
            }
            else{
                printf("the largest number is %d\n",c);
                return 0;
            }
        }*/
       //using logical operators to do the qn
      /*if(a>b && a>c){
        printf("the largest number is %d",a);

       }
       else if(b>c){
        printf("the largest number is %d",b);

       }
       else{
        printf("the largest number is %d",c);
       }
    return 0;*/ 
    int result=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("%d\n",result);
    return 0;
}