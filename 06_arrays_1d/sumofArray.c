#include<stdio.h>
int main(){
    int arr[5]={1,3,5,7,10};
    int sum=0;// initialization of sum=0 to prevent garbage values
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    printf(" The sum of all the element of the array is:%d",sum);
    return 0;
}