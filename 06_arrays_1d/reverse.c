#include<stdio.h>
int main(){
    int arr[5];
    // Taking Input in the array
    for(int i=0;i<=4;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    // now applying for loop in reverse direction
    for(int i=4;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}