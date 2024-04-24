// Question 1
#include <stdio.h>

int main() {
    int n;
    printf("Enter length");
    scanf("%d",&n);
    int array[n],k;
    
    for(int i = 0;i<n;i++){
        printf("Enter element:");
        scanf("%d",&array[i]);
    }
    
    for(int i = 0;i<n;i++){
        printf("%d\n",array[i]);
    }
    
    printf("Enter the kth element\n");
    scanf("%d",&k);
    int temp;
    for(int i = 0;i<n;i++){
        int min = array[i];
        int position;
        for(int j = i;j<n;j++){
            if(array[j] < min){
                min = array[j];
                position = j;
            }
        }
        temp = array[i];
        array[i] = min;
        array[position] = temp;
        
    }
    printf("%d",array[k-1]);
    

    return 0;
}


// Question 2
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter length");
    scanf("%d",&n);
    int array[n];
    
    for(int i = 0;i<n;i++){
        printf("Enter element:");
        scanf("%d",&array[i]);
    }
    
    int temp;
    for(int i = 0;i<n;i++){
        int min = array[i];
        int position;
        for(int j = i;j<n;j++){
            if(array[j] < min){
                min = array[j];
                position = j;
            }
        }
        temp = array[i];
        array[i] = min;
        array[position] = temp;
        
    }
    
    for(int i = 0;i<n;i++){
        printf("%d ",array[i]);
    }

    return 0;
}



// Question 3

#include <stdio.h>

int main() {
    int n;
    printf("Enter length");
    scanf("%d",&n);
    int array[n];
    
    for(int i = 0;i<n;i++){
        printf("Enter element:");
        scanf("%d",&array[i]);
    }
    
    int temp;
    for(int i = 0;i<n;i++){
        int min = array[i];
        int position;
        for(int j = i;j<n;j++){
            if(array[j] < min){
                min = array[j];
                position = j;
            }
        }
        temp = array[i];
        array[i] = min;
        array[position] = temp;
        
    }
    
    for(int i = 0;i<n;i++){
        printf("%d ",array[i]);
    }

    return 0;
}

// Question 4

#include <stdio.h>

int main() {
    int n;
    printf("Enter length");
    scanf("%d",&n);
    int array[n],sum;
    
    for(int i = 0;i<n;i++){
        printf("Enter element:");
        scanf("%d",&array[i]);
    }
    int number;
    scanf("%d",&number);
    
    
    int end_pos,flag=1,start_pos;
    for(int i = 0;i<n;i++){
        int sum=0;
        for(int j = i;j<n;j++){
            sum += array[j];
            if(sum == number){
                end_pos = j;
                start_pos = i;
                flag = 0;
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
    
    if(flag==0){
        printf("The sum is between the indices %d and %d",start_pos,end_pos);
    }else{
        printf("The sum isn't in the array");
    }
    

    return 0;
}