/*
// Declaration

#include <stdio.h>

union car{
    char name[30];
    int price;
} car1, car2, *car3;


// car1, car2 are the union variable however car3 is a union pointer pointing to car type union.

int main(){
    
    union car car1, car2, *car3;

    return 0;
}



// Difference between UNions and Structures

#include <stdio.h>

union unionJob{
    char name[40];
    float salary;
    int workerNo;
} uJob;


struct structJob{
    char name[40];
    float salary;
    int workerNo;
} sJob;

int main(){
    printf("Size of union %d bytes", sizeof(uJob));
    printf("\nSize of structure %d bytes", sizeof(sJob));
}
*/


// Create a structure named Book to store book details like title, author, and price. Write a C program to input details for three books, find the most expensive and lowest priced books, and display their information.


#include <stdio.h>


struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    
    struct Book books[3];
    int i;
    float maxPrice = -1.0, minPrice = 10000000000000;
    struct Book maxBook, minBook;

    
    for (i = 0; i < 3; i++) {
        printf("Enter title for book %d: ", i+1);
        scanf("%s", books[i].title);
        printf("Enter author for book %d: ", i+1);
        scanf("%s", books[i].author);
        printf("Enter price for book %d: ", i+1);
        scanf("%f", &books[i].price);

        if (books[i].price > maxPrice) {
            maxPrice = books[i].price;
            maxBook = books[i];
        }
        if (books[i].price < minPrice) {
            minPrice = books[i].price;
            minBook = books[i];
        }
    }

    
    printf("\nThe most expensive book is:\n");
    printf("Title: %s\n", maxBook.title);
    printf("Author: %s\n", maxBook.author);
    printf("Price: %.2f\n", maxBook.price);

    printf("\nThe lowest priced book is:\n");
    printf("Title: %s\n", minBook.title);
    printf("Author: %s\n", minBook.author);
    printf("Price: %.2f\n", minBook.price);

    return 0;
}