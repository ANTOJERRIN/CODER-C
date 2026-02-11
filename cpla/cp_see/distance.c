#include<stdio.h>
#include<math.h>
typedef struct 
{
    float x;
    float y;
}Po;
int main()
{
    Po p1,p2;
    printf("enter the coordinates:(x1,y1)\n");
    scanf("%f%f",&p1.x,&p1.y);
    printf("enter the coordinates :(x2,y2)\n");
    scanf("%f%f",&p2.x,&p2.y);
    float d=sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
    printf("d=%f\n",d);
    return 0;

}
