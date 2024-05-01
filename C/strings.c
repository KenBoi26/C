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


    // strncpy(char *dest, char *source, int n);

    char str1[40];

    strncpy(str1, "Kenneth is awesome!!",10);

    printf("str1 is: %s\n", str1);


    // strcat(): Concatenates the two strings. It modifies the first argument.
    
    char example[100];

    strcpy(example, "Kenneth ");
    strcat(example, "is awesome!!");

    printf("%s\n", example);


    // strcmp(str1, str2): compares 2 strings lexicographically and returns 0, 1, -1


    // if output is 0, then both strings are equal
    
    // if output is 1, then str1 is greater than str2
    
    // if output is -1, then str1 is less than str2

    char str1[] = "ABC";
    char str2[] = "abc";

    printf("Return value of strcmp is: %d\n", strcmp(str1, str2));
    
    
    return 0;
}