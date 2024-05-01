// String Library

#include <stdio.h>
#include <string.h>


int main(){

    // Initialisation of strings

    char str1[20] = "Kenneth";
    char str2[20] = "HP";

    printf("Value of str1: %s\n", str1);


    // strlen(): Returns the length of the string

    printf("Length of str1: %d\n", strlen(str1));
    printf("Length of str2: %d\n", strlen(str2));

    // strcpy(): Copies the string from source to destination

    char str1[] = "Kenneth";
    char str2[] = "HP";

    char str3[40];
    char str4[40];

    // strcpt(destination, source);
    strcpy(str3, str1);
    strcpy(str4, str2);

    printf("After copying str3 is: %s\n", str3);
    printf("After copying str4 is: %s\n", str4);
}