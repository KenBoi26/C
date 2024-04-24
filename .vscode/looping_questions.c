/*
// Write a program to reverse an integer

#include <stdio.h>

int main()
{
    int num,last,rem=0;
    printf("Enter an integer: ");
    scanf("%d",&num);
    
    while(num>0){
        last = num%10;
        rem = rem*10 + last;
        printf("%d\n",num);
        num /= 10;
    };
    printf("%d",rem);

    return 0;
}
*/
/*
// Write a program to find the palindrome

#include <stdio.h>

int main()
{
    int num,last,rem=0,num1;
    printf("Enter an integer: ");
    scanf("%d",&num);
    num1 = num;
    
    while(num>0){
        last = num%10;
        rem = rem*10 + last;
        num /= 10;
    };
    if(num1 == rem){
        printf("palindrome");
    }else{
        printf("not a palindrome");
    }

    return 0;
}

*/

/*
// Prime Number
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to check whether its prime: ");
    scanf("%d",&num);
    
    for(int i = 2;i<(num**0.5);i++){
        if (num%i == 0){
            printf("%d is not a prime number",num);
            return 0;
        }
    }
    printf("%d is a prime number",num);

    return 0;
}

*/