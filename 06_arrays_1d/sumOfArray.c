#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int sum=0;// initializing with 0 to prevent garbage values
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    printf("The sum of all the element of Array is:%d",sum);
    return 0;
}