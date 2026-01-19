//wacp to print the array of books using structures and functions or input and output
#include <stdio.h>
struct book {
    char title[50];
    float price;
};
typedef struct book Book;
Book inputBook() {
    Book b;
    printf("Enter book title: ");
    scanf(" %[^\n]", b.title);
    printf("Enter book price: ");
    scanf("%f", &b.price);
    return b;
}
void printBook(Book b) {
    printf("Book Title: %s\n", b.title);
    printf("Book Price: %.2f\n", b.price);
}
void inputBooks( int n,Book books[n]) {
    for (int i = 0; i < n; i++) {
        printf("Input details for book %d:\n", i + 1);
        books[i] = inputBook();
    }
}
void printBooks( int n,Book books[n]) {
    for (int i = 0; i < n; i++) {
        printf("\nDetails of book %d:\n", i + 1);
        printBook(books[i]);
    }
}
int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);
    Book books[n];
    inputBooks(books, n);
    printBooks(books, n);
    return 0;
}



