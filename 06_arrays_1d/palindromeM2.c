//Approach by i and j for checking
#include<stdio.h>
int reverse(int arr[],int n){
    int count=0;
    for(int i=0,j=n-1;i<j;i++,j--){
        if(arr[i]==arr[j]) count++;
    }
    return count;
}
int main(){
    int n;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int check=reverse(arr,n);
    if(check==n/2) printf("Paklindrome Array");
    else printf("Not a palindrome array");
    return 0;

}
// note : in the notes we have performed the code with the same approch but the code on the
//        system or this code itself is designed in more clean and structure way.