// Q: If an array err contains n elements, then check if the array is a palindrome or not.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    int help=0;
    // taking input from the user to array arr
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // reverse entering the value of arr to brr array
    for(int i=0;i<=n-1;i++){
        brr[i]=arr[(n-1)-i];
    }
    // checking if the array arr is equal to reversed array brr
    for(int i=0;i<=n-1;i++){
        if(arr[i]==brr[i]) help++;// as if its a palindrome array then this if condition 
    //                   will strike n times which can be used to check Palindrome array
    }
    if(help==n) printf("Palindrome Array");
    else printf("Not a Palindrome array");
    return 0;
}