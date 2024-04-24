// if statement inside an if statemen

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool father = true;
    bool mother = true;
    
    if (father) {
        if (mother) {
            printf("YIPEEE GOA is on!!!");
        } else {
            printf("Father said YES, but my mother has denied...");
        }
    } else {
        printf("Sorry but there's no chance :(");
    }

    return 0;
}

int leap_year(){
    int year;
    printf("Enter the year: ");
    scanf("%d", & year);
    
    if (year % 400 == 0){
        printf("It's a leap year!");
        
    } else if (year % 100 == 0 && (year%4==0)){
        printf("It's a leap year!");
    } else {
        printf("Not a leap year...");
    }
    
    return 0;
}

int greatest_number()
{
    int num1;
    printf("Enter num1: ");
    scanf("%d", & num1);
    
    int num2;
    printf("Enter num2: ");
    scanf("%d", & num2);
    
    int num3;
    printf("Enter num3: ");
    scanf("%d", & num3);
    
    if (num1 > num2){
        if (num1 > num3){
            printf("num1(%d) is the greatest\n",num1);
        } else{
            printf("num2(%d) is the greatest\n",num2);
        }
    } else {
        if (num2 > num3){
            printf("num2(%d) is the greatest\n",num2);
        } else{
            printf("num3(%d) is the greatest\n",num3);
        }
    }
    
    
    return 0;
}