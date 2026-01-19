#include <stdio.h>

int main() {
    int n1,n2,n3;
    printf("values are \n");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2){
         if (n1>n3)
        {
            /* code */printf("largest is %d\n",n1);
        }
        else{
            printf("%d\n",n3);
        }
    }
        else 

        {
            if(n2>n3)
            {
            printf("laregst is%d\n",n2);
            /* code */
            }
        else
        {
            printf("laregst is %d\n",n3);
        }

        
        
    }
   
    return 0;
}
