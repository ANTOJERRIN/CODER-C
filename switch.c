//switch case statements unit-3//day program
//break-exits the loop
//continue-skips one iteration of the loop
#include <stdio.h>
int main()
{
    /*int day;
    printf("enter the day:1/2/3/4/5/6/7\n");
    scanf("%d",&day);
    switch(day)//slab based it wokrs; absence of break -falls through everything will be computed out.
    {//expression-int/char it should be
        case 1:
        printf("monday\n");
        break;
        case 2:
        printf("tuesday\n");
        break;
        
        case 3:
        printf("wednesday\n");
        break;
        case 4:
        printf("thuirdsy\n");
        break;
        case 5:
        printf("fridy\n");
        break;
        case 6:
        printf("saturday\n");
        break;
        case 7:
        printf("sunday\n");
        break;
        default:
        printf("your not alive physically\n");

    }*/
   int n;
   printf("value=\n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
    if(i==3)
    {
        //break;
        continue;
    }
    printf("\n%d",i);
   }
    return 0;
}//break-terminates the loop,continue-skips one iteration cycle and goes for next iteration cycle
//exit(0);-terminates the whole program
