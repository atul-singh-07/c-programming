#include<stdio.h>
int main(){
    int arr[5]={1,3,5,7,10};
    int sum=0;
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    printf(" THE SUM OF THE ARRAY IS:%d",sum);
    return 0;
}