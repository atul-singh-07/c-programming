// Rotate the given array ARR by k steps, where K is non-negative. Note:K can be greater 
// than N as well as N is the size of the array [Arr]

#include<stdio.h>
// function for reversing the array based upon si:starting index and ei:ending index
void reverse(int arr[],int si,int ei){
    for(int i=si,j=ei;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int k;
    printf("Enter the number of steps for rotating array:");
    scanf("%d",&k);
    k=k%n;

    // taking array input
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,0,n-1);// reversing from 0 to n-1 means complete array
    reverse(arr,0,k-1);// reversing from 0 to k-1 means first k elements
    reverse(arr,k,n-1);// reversing from k to n-1 means remaining element of the array 

    // printing the final array
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}