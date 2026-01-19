#include<stdio.h>//
int main()//main function
{
    int n1,n2,n3;//
    printf("Enter the values of n1,n2,n3= ");
    scanf("%d%d%d",&n1,&n2,&n3);//
    //comparing 2 numbers
    printf("the largest among two numbers-n1,n2\n");
    if(n1>n2)
    {
        printf("The largest number=%d\n",n1);

    }
    else if(n2>n1)
    {
        printf("The largest number=%d\n",n2);

    }
    else
    {
        printf("Both the numbers n1 and n2 are equal\n");

}
// comparing 3 numbers
printf("the largest among three numbers - n1,n2,n3\n");
if(n1>n2 && n1>n3)
{ printf("The largest number=%d\n",n1);

}
else if(n2>n3)
{
    printf("The largest number=%d\n",n2);

}
else//n3 is largest
{
    printf("The largest number=%d\n",n3);

}
// using ternary operator for three variables
int w,x,y;
printf("Enter the values of w,x,y= ");
scanf("%d%d%d",&w,&x,&y);
int q=(w>x)?((w>y)?w:y):((x>y)?x:y);
printf("The largest number among w,x,y using ternary operator=%d\n",q);


return 0;// successful execution
}