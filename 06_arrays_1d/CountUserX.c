// Q: Count the number of elements in given array greater than a given number X.

#include<stdio.h>
int fun(int arr[],int x){
    int count=0;
    for(int i=0;i<=6;i++){
        if(arr[i]>x) count++;
    }
    return count;
}
int main(){
    int x;
    printf("Enter a Number:");
    scanf("%d",&x);
    int arr[7]={1,2,3,4,5,6,7};
    int Number=fun(arr,x);
    printf("Count:%d",Number);
    return 0;
}