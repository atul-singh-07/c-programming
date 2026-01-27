#include<stdio.h>
void fun(int a[]){
    a[0]=5;// updating the first element of the array
    return;
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d\n",arr[0]);
    // function call to fun
    fun(arr);// name is only passed to the function for passing complete array
    printf("%d\n",arr[0]);
    return 0;
}
// NOTE: and here with this code we can clearly state that passing function in array works
//       on call by reference as it can change the value without using pointers means 
//       there is significant use of address