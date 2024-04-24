// For Loops
#include <stdio.h>

int main()
{
    
    for(int i = 1; i<=5; i++){
        printf("%d. Hello World!\n",i);
    };
    
    printf("The Loop has ended!");
    

    return 0;
}


/*
// Even numbers from 0 to 20
#include <stdio.h>

int main()
{
    
    for(int i = 0; i<=20; i++){
        if(i%2==0){
            printf("%d\n",i);
        };
        
    };
    

    return 0;
}
*/

/*
// sum of n numbers
#include <stdio.h>

int main()
{
    int end;
    int sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&end);
    
    
    for(int i = 0; i<=end; i++){
        sum += i;
        
    };
    printf("%d",sum);

    return 0;
}
*/