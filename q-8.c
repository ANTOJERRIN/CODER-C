//using structures compute distance btw two points
#include <stdio.h>
#include <math.h>

    typedef struct  {//def plural
        float x;
        float y;   // dot operator / access operator
    } Point;//always use struct syntax always outside the main()
    int main(){

    Point p1, p2;
    printf("Enter coordinates of point 1 (x, y): ");
    scanf("%f%f",&p1.x,&p1.y);
    printf("Enter coordinates of point 2 (x, y): ");
    scanf("%f%f",&p2.x,&p2.y);

    float distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    printf("Distance between points: %.2f\n", distance);

    return 0;// successful termination
}
