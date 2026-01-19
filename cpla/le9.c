//wacp to printarea of circles using struct and func
#include <stdio.h>
#include <math.h>
struct circle
{
    float r,a;
};
typedef struct circle Circle;
int inputn()
{
    int n;
    printf("enter the value of n:\n");//how many circles u need to take 
    scanf("%d",&n);
    return n;
}
Circle  in_circle()
{
    Circle c;
    printf("enter the radius:\n");
    scanf("%f",&c.r);
    return c;


}
void in_circles(int n,Circle c[n])
{ for(int i=0;i<n;i++)
    {
        c[i]=in_circle();
    }


}
 void compute_area(int n,Circle c[n])
{
    c->a=3.14*c->r*c->r;
}
void comp_acircles(int n ,Circle c[n])
{
    for(int i=0;i<n;i++)
    {
        compute_a(&c[i]);
    }
}
void printac(Circle c)
{
    printf("the area and radius ofthe circle is %f and %f\n",&c.r,&c.a);
}
void printacs(int n, Circle c[n])
{
    for(int i=0;i<n;i++)
    {
        printac(c[i]);
    }
}
int main()
{  
    int n;
    n=inputn();
    Circle c[n];
    incircles(n,c);
    comp_acircles(n,c);
    printacs(n,c);
    return 0;


}
