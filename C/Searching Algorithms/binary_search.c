/*
Condition - Array has to be sorted
          - do until l <= r
          - starting and ending index shouldn't cross
*/

#include <stdio.h>


void printSearchSpace(int arr[], int s, int e){
    printf("The new search space from %d - %d find the array is \n",s,e);
    
    for(int i=s; i<e; i++){
        printf("%d ",arr[i]);
    }
    
    printf("\n");
}


int binarySearch(int arr[], int key, int start, int end){
    
    while(start <= end){
        
        printSearchSpace(arr,start,end);
        
        int mid = (start + end)/2;
        
        if(arr[mid] == key){
            return mid;
        }
        
        if(arr[mid] < key){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}




int main() {
    
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int key;
    printf("Enter the key you want to search in the Array: ");
    scanf("%d",&key);
    printf("\n");
    
    int result = binarySearch(arr, key, 0, n);
    
    printf("\n");
    
    if(result==-1){
        printf("The key %d is not present in the array.\n",key);
    }else{
        printf("The key %d is present at the index %d.\n",key,result);
    }
    
    
    return 0;
}