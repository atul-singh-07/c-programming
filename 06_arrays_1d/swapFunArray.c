#include<stdio.h>
void fun(int arr[]){
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    return;
}
int main(){
    int arr[2]={1,2};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n",arr[0],arr[1]);
    return 0;
}// HER THE OUTPUT IS 1 2
//                    2 1 THIS IS BECAUSE OF CALL BY REFERENCE OF ARRAY IN FUNCTION