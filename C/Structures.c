// Nested Structures
#include <stdio.h>

struct complex {
int imag;
float real;
};

struct number{
int integer;
struct complex comp;
} num1;

int main()
{
// Initialising member of number struct
num1.integer = 6;

// Initialise the complex var
// inside number struct
num1.comp.imag = 11;
num1.comp.real =5.28;

printf("Imaginary part: %d\n", num1.comp.imag);
printf("Real Part: %.2f\n", num1.comp.real);
printf("Integer: %d\n",num1.integer);
return 0;
}