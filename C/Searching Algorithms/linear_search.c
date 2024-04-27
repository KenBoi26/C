#include <stdio.h>

int main(){
    
    int n;
    printf("Enter the length of the array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d",&arr[i]);
    }

    int key;
    printf("Enter a number to search: ");
    scanf("%d",&key);

    
    for(int i=0; i<n; i++){
        if(key==arr[i]){
            printf("Element found at index %d", i);
            return 0;
        }
    }

    printf("Element not found");
    
    
    return 0;
}