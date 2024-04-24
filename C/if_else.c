#include <stdio.h>

int main(){
    int number;
    printf("Enter an integer: ");
    scanf("%d", & number);

    if(number > 0){
        printf("The number is greater than 0");
    } else if(number < 0) {
        printf("The number is less than 0");
    } else {
        printf("The number is 0");
    }

    return 0;
}