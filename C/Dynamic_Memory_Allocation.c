/*
// Malloc
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;

    // using malloc function to define the size of block in bytes
    // And making our ptr point to this newly created address space

    ptr = malloc(sizeof(int));

    if(ptr!=NULL){
        printf("Memory is created using the malloc() function");
    }else{
        printf("Memory is not created");
    }

    return 0;
}
*/



// Calloc
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;

    // using calloc function to define the size of block in bytes
    // And making our ptr point to this newly created address space

    ptr = calloc(4, sizeof(int));

    if(ptr!=NULL){
        printf("Memory is created successfully");
    }else{
        printf("Memory is not created");
    }

    return 0;
}