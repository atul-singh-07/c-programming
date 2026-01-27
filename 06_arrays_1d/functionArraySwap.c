#include<stdio.h>
// complete transfer of address of arr to a
void swap(int a[]){
    // same swap code condition for array elements
    int temp=a[0];
    a[0]=a[1];
    a[1]=temp;
    return;
}
int main(){
    int arr[2]={1,2};
    printf("%d %d\n",arr[0],arr[1]);
    swap(arr);// passing the array to the swap function
    printf("%d %d",arr[0],arr[1]);
    return 0;
}
// note : the main concept of the code or the logic to code is completely same as that of 
//        swap code but here we have swapped the value of array and that too without pointers
//        which gives us a clear idea how array in function works on call by reference