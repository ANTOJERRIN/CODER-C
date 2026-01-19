//wacp to print soln for towers of hanoi
#include <stdio.h>
void toh(int n,char source,char destination,char spare)
{
    if(n>0){
        toh(n-1,source,destination,spare);
        printf("Move disk %d from %c to %c \n",n,source,destination);
        toh(n-1,spare,source,destination);
    }
}

int main() {
    int n;
    printf("enter the no of disks:\n");
    scanf("%d",&n);
    toh(n,'A','B','C');
    return 0;
}
