#include<stdio.h>
int main(){
    int arr[5]={1,2,3,2,1};
    // Printing addresses of each element of the array arr
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p",&arr[4]);
    return 0;
}