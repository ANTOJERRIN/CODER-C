// AREA PROGRAM + DISTANCE BTW POINTS//DOCUMENTATION
#include <stdio.h>//linker section
#include <math.h>//math header file
#define pi 3.14//macro definition
int main()//main function
{
    float l,b,areaR;//
    printf("enter the length and breadth of the rectangle=");
    scanf("%f%f",&l,&b);//&-address of operator
    areaR=l*b;
    float B,h,areaT;
    printf("Enter the base and the height of the triangle=");
    scanf("%f%f",&B,&h);
    areaT=0.5*B*h;
    float r,areaC;
    printf("Enter the area of the circle =");
    scanf("%f",&r);
    areaC=pi*r*r;
    float x1,x2,y1,y2,d;//distance between two points
    printf("Enter the coordinates of the points (x1,x2),(y1,y2)=");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));//
    printf("area of rectangle=%f\n",areaR);
    printf("area of triangle=%f\n",areaT);
    printf("area of circle=%f\n",areaC);
    printf("distance between the points=%f\n",d);
    return 0;//succesful termination
}