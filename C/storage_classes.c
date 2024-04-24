// Storage Classes
/*

Every variable has 2 properties:-
1. type
2. scope/visibility/lifetime



Storage Classes:-
- Auto - The variables declared indside a block are automatic or local variables

- External - Variavles that are declared outside of functions AKA global.
           - Accessible from anywhere in the program.

- Static

- Register - Storage: CPU registers
           - inital: Garbage values
           - scope: accessible within the block itself
           - life: After the block execution

            It's supposed to be faster than the local variables as it can directly get info from the registers.





*/


// Auto
#include <stdio.h>



void iSum(){
    int jSum = 54;
    //printf("The value of variable i in sum function is: %d\n", iMain);
};



int main()
{
    int iMain = 10;
    printf("The value of variable iMain in main function is: %d\n", iMain);
    iSum();

    return 0;
};



// External


int iMain = 10;

void eSum(){
    int jSum = 54;
    printf("The value of variable i in sum function is: %d\n", iMain);
}



int external()
{
    printf("The value of variable iMain in main function is: %d\n", iMain);
    eSum();

    return 0;
}


// register

int x = 78;

int Resiter(){
    register int iMain = 10;
    printf("%d", iMain);
    printf("%d", x);
    
    return 0;
}



