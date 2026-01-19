//structures using functions and pointers
#include <stdio.h>
struct point
{
    float x,y;
};
typedef struct point Point;
Point i()
{
    Point p;
    printf("Enter x and y coordinates: ");
    scanf("%f%f",&p.x,&p.y);
    return p;
}
float fd(Point p1, Point p2)
{
    return sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
}
void d(Point p1,Point p2, float dis)
{
    printf("the distance btw two coordinates (%.2f, %.2f) and (%.2f, %.2f) is: %.2f\n",p1.x,p1.y,p2.x,p2.y,dis);
}
int main()
{
    Point p1,p2;
    float dis;
    p1 = i();
    p2 = i();
    dis = fd(p1,p2);
    d(p1,p2,dis);
    return 0;
}