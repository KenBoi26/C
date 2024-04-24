// Online C compiler to run C program online

/*
Input:
{
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
}

Output:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10


*/
#include <stdio.h>

int main() {
    
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int R = 4;
    int C = 4;
    
    int i, k=0,l=0,m=R,n=C;
    /*
    k = starting row index
    m = ending row index
    
    l = starting column index
    n = ending column index
    */
    
    
    while(k<m && l<n){
        // Print the first row, from the remaining matrix
        
        for(i=l; i<n; i++){
            printf(" %d ",arr[k][i]);
        }
        
        k++;
        
        // Print the last column, from the remaining matrix
        for(i=k; i<m; i++){
            printf(" %d ",arr[i][n-1]);
        }
        n--;
        
        // Print the last row from the remaining matrix
        if(k<m){
            for(i=n-1;i>=l;i--){
                printf(" %d ",arr[m-1][i]);
            }
            m--;
        }
        
        // Print 1st column from remaining matrix
        if(l<n){
            for(i=m-1;i>=k;i--){
                printf(" %d ",arr[i][l]);
            }
            l++;
        }
    }
    
    
    
    return 0;
}