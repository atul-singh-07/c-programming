#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of Array:");
    scanf("%d",&n);

    int arr[n];
    int brr[n];

    // taking input to arr array
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // reversing the array

    for(int i=0;i<=n-1;i++){
        brr[i]=arr[(n-1)-i];
    }

    // checking for palindrome condition
    int help=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==brr[i]) help++;
    }

    if(help==n) printf("Palindrome Array");
    else printf("Not a palindrome Array");

    return 0;
}