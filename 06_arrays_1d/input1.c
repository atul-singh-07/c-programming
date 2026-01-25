#include<stdio.h>
// This is a way to take input from a user but this is not the best way to do so
int main(){
    int arr[4];
    printf("Enter first element:");
    scanf("%d",&arr[0]);
    printf("Enter second element:");
    scanf("%d",&arr[1]);
    printf("Enter third element:");
    scanf("%d",&arr[2]);
    printf("Enter forth element:");
    scanf("%d",&arr[3]);

    printf("%d",arr[2]);
    return 0;
}