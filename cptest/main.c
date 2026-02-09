/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct book
{
    char title[50];
    float price;
    
};
typedef struct book Book;
Book input()
{
    Book b;
    printf("enter the book title:\n");
    scanf("%s",b.title);
    printf("enter the book's price:\n");
    scanf("%f",&b.price);
    return b;
    
}
int input_n()
{
    int n;
    printf("enter the number of books\n");
    scanf("%d",&n);
    return n;
}
void inputbooks(int n,Book lib[n])
{
    for(int i=0;i<n;i++)
    {
        lib[i]=input();
    }
}
void displaybook(Book b)
{
    printf("BOOK Title AND PRICE :%s %.2f\n  ",b.title,b.price);
    
    
}
void displaybooks(int n,Book lib[n])
{
    printf("the title of the books are ");
    for(int i=0;i<n;i++)
    {
        displaybook(lib[i]);
    }
}
int main()
{
    int n;
    n=input_n();
    Book lib[n];
    inputbooks(n,lib);
    displaybooks(n,lib);
    return 0;
}
