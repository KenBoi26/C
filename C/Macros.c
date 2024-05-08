// Object-like Macros
/*
#include <stdio.h>

#define NUM 26

int main(){

    printf("The value of NUM is %d\n",NUM);

    return 0;
}


// Chain Macros

#include <stdio.h>

#define KENNETH DOB
#define DOB 2005

int main(){

    printf("The DOB of Kenneth is: %d\n", KENNETH);

    return 0;
}


// Multi-line Macros

#include <stdio.h>

#define SCORES 50, \
                51, \
                52, \
                53

int main(){

    int arr[] = {SCORES};

    for(int i=0; i<4; i++){
        printf("The value of arr[%d] is %d\n",i,arr[i]);
    }
    
    
    return 0;
}


// Function-Like Macros

#include <stdio.h>

#define MAX(a,b) (((a)>(b)) ? (a) : (b))

int main(){
    
    int a = 31;
    int b = 32;

    printf("The maximum value between %d and %d is %d\n",a,b,MAX(a,b));
    
    
    return 0;
}



#define Pi 3.14

#include <stdio.h>

int main(){

    int x = 5;
    float areaofCircle = Pi*x*x;

    printf("Area found is: %.2f", areaofCircle);

    return 0;
}
*/


#include <stdio.h>
#define circleArea(radius) (3.14)*(radius)*(radius)


int main(){
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = circleArea(radius);

    printf("%.2f",area);

    return 0;
}