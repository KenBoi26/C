
// Q1. Freuqency of numbers in a word
#include <stdio.h>

int main()
{
    
    
    int num,original;
    scanf("%d",&num);
    original = num;
    
    for(int i = 0;i<=9;i++){
        int last,counter = 0;
        while(num!=0){
            last = num%10;
            if(last==i){
                counter += 1;
            }
            num/=10;
        }
        printf("The frequency of %d is %d\n",i,counter);
        num = original;
    }

    return 0;
}



// Q2. Length of the last string in a sentence
#include <stdio.h>

int main()
{
    
    char str[100];
    gets(str);
    int counter = 0;
    int found = 0;
    for(int i = 0; str[i] != '\0';i++){
        if(str[i]!=' '&&found!=1){
            counter += 1;
        }else if(str[i]!=' '&&found==1){
            counter = 1;
            found = 0;
        }else{
            found = 1;
        }
    }
    printf("%d",counter);

    return 0;
}




// Q3. Printing an array using recursions
#include <stdio.h>


void printArr(int arr[],int size,int counter){
    if(counter>=size){
        return 0;
    }else{
        printf("%d ",arr[counter]);
        counter+=1;
        return printArr(arr,size,counter);
    }
}

int main()
{
    
    int size;
    printf("Input size: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Array elements: ");
    printArr(arr,size,0);
    

    return 0;
}


// Q4. Arrange array in ascending
#include <stdio.h>


int main()
{
    
    int size;
    printf("Input size: ");
    scanf("%d",&size);
    
    int arr[size];
    for(int i = 0;i<size;i++){
        printf("input%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    int length = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;

    for (i = 0; i < (length - 1); i++){
        for (j = 0; j < (length - i - 1); j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}


// Q5. Deletion of element in array

#include <stdio.h>


int main()
{
    
    int size,position;
    printf("Input size: ");
    scanf("%d",&size);
    
    int arr[size];
    for(int i = 0;i<size;i++){
        printf("input%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("Input position to delete: ");
    scanf("%d",&position);
    
    for(int i = position-1;i<size-1;i++){
        arr[i]=arr[i+1];
        
    }
    
    for(int i = 0;i<size-1;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}



// Q1. Searching
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int arr[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    int min=arr[0],max=arr[0];
    
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    
    printf("Minimum element is: %d\n",min);
    printf("Maximum element is: %d",max);

    return 0;
}



// Q2. Write a program in C to find a pair with given sum in the array.
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int arr[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("The given sum: ");
    
    int sum;
    scanf("%d",&sum);
    
    
    int flag = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(arr[i] + arr[j] == sum){
                printf("Pair of elements can make the given sum by the value of index %d and %d\n",i,j);
                flag = 1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    
    if(flag==0){
        printf("There is no such pair in the given array to give the sum: %d",sum);
    }

    return 0;
}


// Q3. rotation of 1d array

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int arr[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    int position;
    scanf("%d",&position);
    
    printf("From position %d the values of the array are: ",position);
    
    for(int i=position; i<n; i++){
        printf("%d ",arr[i]);
    }
    
    printf("\n");
    
    
    printf("Before the position %d the values of the array are: ",position);
    for(int i=0; i<position; i++){
        printf("%d ",arr[i]);
    }
    
    printf("\n");
    
    int count = 0;
    while(count!=position){
        int temp = arr[0];
        for(int i=0; i < n-1; i++){
            arr[i] = arr[i+1];
        }
        
        arr[n-1] = temp;
        count +=1;
    }
    
    printf("After rotating from position %d the array is:\n",position);
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}



// Q4. Write a program in C to find the largest sum of contiguous subarrays in an array.


#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int arr[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    int max=arr[0];
    int sum = 0;
    
    for(int i=0; i<n-1; i++){
        sum = arr[i];
        if(sum > max){
            max = sum;
        }
        for(int j=i+1; j<n-1; j++){
            sum += arr[j];
            if(sum > max){
                max = sum;
            }
        }
    }
    
    printf("The largest sum of contiguous array is: %d",max);
    

    return 0;
}



// +ve and -ve numbers
#include <stdio.h>

void func(int arr[], int n) {
    int i = 0, j = n - 1;
    while (i < j) {
        if (arr[i] > 0 && arr[j] < 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        if (arr[i] < 0) {
            i++;
        }
        if (arr[j] > 0) {
            j--;
        }
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    func(arr, n);
    printf("Final Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


// Array Reversal
#include <stdio.h>

void func(int arr[], int n) {
    int i = 0, j = n - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        
        i++;
        j--;
        
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    func(arr, n);
    printf("Final Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}




// abs difference of pairs closest to x

#include <stdio.h>
#include <math.h>

int main() {
    int size;
    scanf("%d",&size);
    
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    
    int x;
    scanf("%d",&x);
    
    int sum = arr[0] + arr[1] + arr[2];
    int closest = fabs(sum - x);
    int num;
    for(int i=0; i<size-2; i++){
        for(int j=i+1; j<size-1; j++){
            for(int k=j+1; k<size; k++){
                
                sum = arr[i]+arr[j]+arr[k];
                int diff = fabs(sum-x);
                if(diff < closest){
                    closest = diff;
                    num = sum;
                }
                
            }
        }
    }
    
    printf("%d is closest to %d",num, x);

    return 0;
}


// Anagram
#include <stdio.h>

int main() {
    char str1[50], str2[50];
    int count[100] = {0};

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    

    for (int i = 0; str1[i]; i++) {
        count[str1[i]]++;
    }
    for (int i = 0; str2[i]; i++) {
        count[str2[i]]--;
    }
    for (int i = 0; i < 100; i++) {
        if (count[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
    return 0;
}


// Write a program in C to find the duplicate values of an array of n integers.
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j] = arr[i];
            j++;
        }
    }
    arr[j] = arr[n - 1];

    printf("Output: ");
    for (int i = 0; i < j+1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}