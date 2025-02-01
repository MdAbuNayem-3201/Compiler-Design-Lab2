#include<stdio.h>
int main(){

    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
    int arr2[n];
    int j = 0;
    
    for(int i=n-1;i>=0;i--){
        arr2[j] = arr[i];
        j++;
    }
    
    printf("\nReversed:");
    
    
    for(int i=0; i<n; i++){
        printf("%d ", arr2[i]);
    }



}
