/*
#include <stdio.h>

int main() {
    int arr[4];
    
    for(int i=0; i<4; i++){
        printf("Address of arr[%d] = %p\n", i, &arr[i]);
    }
    
    printf("Address of array arr: %p",arr);

    return 0;
}

*/

#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};
    int *ptr;
    
    ptr = &arr[3]; // by default its 0
    
    printf("Value at which ptr points is = %d\n", *ptr);
    printf("Value at which array arr[3] is = %d\n", arr[3]);
    
    printf("\nValue pointed by ptr + 1 is = %d\n", *(ptr+1));
    printf("Value in arr[1] is = %d\n", arr[4]);
    
    printf("\nValue pointed by ptr - 1 is = %d\n", *(ptr-1));
    printf("Value in arr[1] is = %d\n", arr[2]);


    return 0;
}