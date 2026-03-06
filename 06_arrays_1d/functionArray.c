// This is an experiment which helps us to know that area works upon call by reference.
// As without passing address, we are able to change Array from different functions
// without using pointers which means when u pass a array then the address is passed.
 
#include<stdio.h>
void fun(int a[]){
    a[0]=10;// here we are trying to update 1st element of the array
    return;
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d\n",arr[0]);
    return 0;
}