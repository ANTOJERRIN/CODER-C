//array of strings
#include<stdio.h>
#include<string.h>
int in()
{
    int n;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    return n;
}
void inarr(int n,char a[n])
{
    for(int i=0;i<n;i++){
        printf("enter the element at index :%d",i);
        scanf("%s",a[i]);
        scanf("%d",&a[i]);


    }
}
void bubs(int n,char a[][n])
{
    int f=0;
    char t[n];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-(i+1);j++){
            if(strcmp(a[j],a[j+1])>0){
                strcpy(t,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],t);
                f=1;
            }

        }
        if(f==0){
            break;
        }
    }
}
void out(int n,char a[][n]){
    printf("sorted array is\n");
    for(int i=0;i<n;i++){
        printf("%s",a[i]);


    }
    printf("\n");
}

int main() {
    int n=in();
    char a[n][n];
inarr(n,a);
bubs(n,a);
out(n,a);
    return 0;
}
