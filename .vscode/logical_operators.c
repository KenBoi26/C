#include <stdio.h>
#include <stdbool.h>

// Gerneral syntax of the C program

// LO works on boolean
// non 0 and 0 r also true and false
int main(){
    // treated as 1 and 0
    int a = 5;
    int b = 5;
    int c = 11;
    int result;

    // Check if a is equal to b AND c is greater than b

    result = (a==b) && (c>b);
    printf("%d\n",result);

    // Check if a==b and a==c
    result = (a==b) && (a==c);
    printf("%d\n",result);

    return 0;
}
