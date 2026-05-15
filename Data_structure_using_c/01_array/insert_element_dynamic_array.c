#include<stdio.h>
int main(){
    int arr[100];// created a array of some max size

    int n;
    printf("Enter the number of element in array:");
    scanf("%d",&n);

    // taking input to the array
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d",i+1);
        scanf("%d",&arr[i]);
    }

    int k;
    printf("Enter the position to insert element:");
    scanf("%d",&k);

    int element;
    printf("Enter the element to insert at position %d:",k);
    scanf("%d",&element);

    // using for loop for right side shifting
    for(int i=n;i>k;i--){
        arr[i]=arr[i-1];
    }
    arr[k]=element;
    n++; // number of element in the array get increased after insertion

    // printing updated array after insertion
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}