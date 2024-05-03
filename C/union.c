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

*/

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