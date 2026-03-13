#include<stdio.h>
int main(){
    int n;
    printf("Enter the Size fo array:");
    scanf("%d",&n);
    // Taking the array input by the user
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter element number%d:",i+1);
        scanf("%d",&arr[i]);
    }

    // printing the array
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}