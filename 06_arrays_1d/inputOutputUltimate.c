#include<stdio.h>
int main(){
    int arr[5];
    // inputing the array using for loop
    for(int i=0;i<=4;i++){
        printf("Enter number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // printing the complete array using for loop
    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}