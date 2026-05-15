#include<stdio.h>
int main(){
    int arr[100];// creating array of max size for dynamic operations

    int n;
    printf("Enter the number of element in the array:");
    scanf("%d",&n);

    // taking input to the array
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d :",i+1);
        scanf("%d",&arr[i]);
    }

    int k;
    printf("Enter the position of element to delete/remove:");
    scanf("%d",&k);

    k=k-1; // performing deletion
    
    // performing left side shifting
    for(int i=k;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;// number of element get reduced after deletion

    // printing the array after deletion
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}