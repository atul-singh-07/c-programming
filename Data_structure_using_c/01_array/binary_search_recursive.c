#include<stdio.h>// sorted elements
int binary_recursive(int arr[],int low,int high,int element){
    int mid=(low+high)/2;
    if(arr[mid]==element) return mid;
    else if(arr[mid]<element) return binary_recursive(arr,mid+1,high,element);
    else return binary_recursive(arr,low,mid-1,element);
}
int main(){

    int arr[100];// dynamic array
    int n;
    printf("Enter the number of element in array:");
    scanf("%d",&n);

    // taking input to the array
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d",i+1);
        scanf("%d",&arr[i]);
    }

    int element;
    printf("Enter the element to search in array:");
    scanf("%d",&element);

    int result=binary_recursive(arr,0,n-1,element);

    if(result!=-1){
        printf("Element found at:%d",result);
    }
    else{
        printf("Element not found");
    }

    return 0;
}