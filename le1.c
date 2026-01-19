//level-2 programs
//using call by ref for comparing numbers

#include <stdio.h>//linker section
void input(int *aa, int *ab, int *ac)//using call by ref
{
    printf("Enter three numbers\n");
    scanf("%d%d%d",aa,ab,ac);//inputing val
}

int find_largest(int a, int b, int c)//we re doing computation of sum
{
    return a>b?(a>c?a:c):(b>c?b:c);//using ternary operator 
}

void output(int a, int b, int c, int largest)// printing values 
{
    printf("The largest of %d %d %d is %d",a,b,c,largest);//printing values
}

int main()//main func
{
    int a,b,c,largest;//declaring the var for the func 
    input(&a,&b,&c);//func calling 
    largest = find_largest(a,b,c);//we re calling computation func
    output(a,b,c,largest);/// we re calling output func
}

