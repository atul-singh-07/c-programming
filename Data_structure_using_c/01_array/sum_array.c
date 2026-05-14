#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of Array:");
    scanf("%d",&n);

    // taking input to the array
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d :",i+1);
        scanf("%d",&arr[i]); 
    }

    int sum=0;
    // performing sum in for loop
    for(int i=0;i<=n-1;i++){
        sum=sum+arr[i];
    }

    printf("The sum of element of Array is:%d",sum);
    return 0;
}