#include<stdio.h>
void swap(int arr[]){
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    return;
}
int main(){
    int arr[2];
    printf("Enter A:");
    scanf("%d",&arr[0]);

    printf("Enter B:");
    scanf("%d",&arr[1]);
    swap(arr);
    printf("A:%d B:%d",arr[0],arr[1]);
    return 0;
}