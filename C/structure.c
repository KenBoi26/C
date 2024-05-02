#include <stdio.h>
#include <string.h>


// declaration of a structure

struct Employee{
    int id;
    char name[20];
    float marks;
};


int main(){
    
    // Initialization of a structure
    struct Employee emp1 = {1, "Kenneth", 99.9};

    struct Employee emp2;
    emp2.id = 2;
    strcpy(emp2.name, "John");
    emp2.marks = 98.9;

    struct Employee emp3, emp4;
    emp3.id = 3;
    strcpy(emp3.name, "Doe");
    emp3.marks = 97.9;

    emp4.id = 4;
    strcpy(emp4.name, "John");
    emp4.marks = 96.9;

    printf("Employee 1:\n");
    printf("ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Marks: %.2f\n\n", emp1.marks);

    printf("Employee 2:\n");
    printf("ID: %d\n", emp2.id);
    printf("Name: %s\n", emp2.name);
    printf("Marks: %.2f\n\n", emp2.marks);

    printf("Employee 3:\n");
    printf("ID: %d\n", emp3.id);
    printf("Name: %s\n", emp3.name);
    printf("Marks: %.2f\n\n", emp3.marks);

    printf("Employee 4:\n");
    printf("ID: %d\n", emp4.id);
    printf("Name: %s\n", emp4.name);
    printf("Marks: %.2f\n\n", emp4.marks);

    return 0;
}