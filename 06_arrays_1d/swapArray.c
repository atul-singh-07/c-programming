#include<stdio.h>
int main(){
    // Swapping the element of array using extra variable
    
    int arr[2]={1,0};// Old Array
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;

    printf("%d ",arr[0]);
    printf("%d ",arr[1]);
    // New Array:{0,1}
    return 0;
}