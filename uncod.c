#include <stdio.h>

int main() {
    int i=0,n=5;
   /*while (i<=n)
    {i++;
        if(i==3){
            continue;
        }
        printf("%d",i);
       
    }*/
    while (i<=n)//infinite loop
    {
        if(i==3){
            continue;
        }
        printf("%d",i);
        /* code */i++;
    }
    
    return 0;//return terminates the entire function
}
