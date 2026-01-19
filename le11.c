/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int in()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter element at %d: ",i);
        scanf("%d",&a[i]);
    }
}

void sort_array(int n, int a[n])
{
    int flag =0;
    int temp;
    for(int i=0;i<n-1;i++) {
        for(int j=0; j< n-1-i;j++) {
            if(a[j]>a[j+1]) {
               temp = a[j];
               a[j] = a[j+1];
               a[j+1] = temp;
               flag = 1;
            }
            
        }
        if (flag = 0) {
            printf("");
            break;
        }
    }
}
 
 
 
 /* Give me test case for which this algorithm will fail. */
 
 
        

int bsearch(int n,int a[n], int key)
{
    int left=0,right = n-1,middle;
    while (left <= right) {
        middle = (left + right)/2;
        if (key > a[middle]) {
            left = middle +1;
        }
        else if ( key < a[middle]) {
             right = middle -1;
        }  
        else {
             return middle;
        }
    }
    return -1;
}

int main()
{
    int n;
    n = in();
    int a[n];
    input_array(n,a);
    int key = in();
    sort_array(n,a);
    int pos = bsearch(n,a,key);
    printf("Position = %d\n",pos);
    return 0;
}