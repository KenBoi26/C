// String Palindrome
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = {"aabbaa"};
    
    int l = 0;
    int r = strlen(str)-1;
    
    while(r>l){
        if(str[l++]!=str[r--]){
            printf("The string %s is not a palindrome",str);
            return 0;
        }

    }
    printf("The string is a palindrome!");

    return 0;
}
