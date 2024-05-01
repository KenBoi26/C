/*
#include <stdio.h>

struct point{
    int value;
};

int main(){
    struct point s;

    // Pointer to structure
    struct point *ptr = &s;
    return 0;
}
*/

#include <stdio.h>
#include <string.h>

struct Student{
    int rollNo;
    char name[30];
    char branch[30];
    int batch;
};

int main(){
    struct Student s1;
    struct Student *ptr = &s1;

    s1.rollNo = 73;
    strcpy(s1.name, "Kenneth");
    strcpy(s1.branch, "Computer Science");
    s1.batch = 2023;

    // Through ptr
    printf("Roll Number: %d\n", (*ptr).rollNo);
    printf("Name: %s\n", (*ptr).name);
    printf("Branch : %s\n", ptr->branch);
    printf("Batch: %d\n", ptr->batch);
    
    // Directly accessing the members of a structure using dot operator

    printf("\nRoll Number: %d\n", s1.rollNo);
    printf("Name: %s\n", s1.name);
    printf("Branch : %s\n", s1.branch);
    printf("Batch: %d\n", s1.batch);
}