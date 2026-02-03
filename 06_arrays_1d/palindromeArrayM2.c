// If an area contains N elements, then cheque if the array is a palindrome or not M2

#include<stdio.h>
void reverse(int arr[], int n){
    int count =0;// here we are using count to help avoid repetition in printing palindrome
    // or not palindrome
    for(int i=0,j=n-1;i<j;i++,j--){
        if(arr[i]==arr[j]) count++;// if found a condition that when this condition hits
        // it will always increse count by 1 and after checking complete array it should be
        // n/2 == count as i=0 j=n-1 then i=1 j=n-2 which at last ends up on n/2 iteration
    }

    printf("the count is:%d\n",count);// just for concept clearance nothing else
    if(n/2==count) printf("Palindrome");
    else printf("not palindrome");
    return;
}
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    // taking input of array from the user
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);// function call
    return 0;
}