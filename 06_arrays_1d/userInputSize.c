#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];

    // taking input to the array
    for(int i=0;i<=n-1;i++){
        printf("Enter elemrnt %d:",i+1);
        scanf("%d",&arr[i]);
    }

    // printing the array
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}