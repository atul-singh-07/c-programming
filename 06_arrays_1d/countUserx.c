// Count the number of elements in given array greater than a number X
#include<stdio.h>
int count(int x, int arr[]){
    int count=0;
    for(int i=0;i<=7;i++){
        if(arr[i]>x) count++;
    }
    return count;
}
int main(){
    int x;
    printf("Enter the number to campare from array:");
    scanf("%d",&x);
    int arr[7]={1,2,3,4,5,6,7};
    int result=count(x,arr);
    printf("the count of number greater than the entered number is:%d",result);
    return 0;
}