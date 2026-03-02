#include<stdio.h>
int main(){
    int arr[5];
    // Taking Input
    for(int i=0;i<=4;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // Printing Array
    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}