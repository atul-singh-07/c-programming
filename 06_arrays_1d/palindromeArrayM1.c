// If an array AR N elements. Then cheque if the given array is a palindrome or not.M1

// here we are going to use the approach of reversing the array and check wheather the reversed
// array is same as the entered array
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    // taking the input for the arr from user
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // storing the reversed values of arr in brr array
    for(int i=0;i<=n-1;i++){
        brr[i]=arr[(n-1)-i];
    }
    // checking if the arr is equal to reversed arr stored in brr
    int help=0;// for avoiding repetition printing of palindrome statement
    for(int i=0;i<=n-1;i++){
        if(arr[i]==brr[i]) help=1;
    }
    if(help==1) printf("Palindrome array");
    else printf("not a palindrome array");
    return 0;
}