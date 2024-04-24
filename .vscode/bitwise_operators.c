// Bitwise Operators
#include <stdio.h>

int main(){
    int a = 12;
    int b = 15;

    

    printf("a AND b = %d\n",a&b);
    printf("a OR b = %d\n",a|b);
    printf("a XOR b = %d\n",a^b);

    printf("a>>2 right shift %d\n",a>>2);
    printf("b<<2 left shift  %d\n",b<<2);

    return 0;
}