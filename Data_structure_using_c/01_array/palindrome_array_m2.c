#include<stdio.h>
void reverse(int arr[],int n){
    int count=0;
    for(int i=0,j=n-1;i<j;i++,j--){
        if(arr[i]==arr[j]) count++;
    }
    if(count==n/2) printf("Palindrome Array");
    else printf("Not Palindrome");
}
int main(){
    int n;
    printf("Enter the size of Array:");
    scanf("%d",&n);

    int arr[n];
    // taking input to the array

    for(int i=0;i<=n-1;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    return 0;
}