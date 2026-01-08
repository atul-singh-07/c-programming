#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%p\n",&arr[0]);// FOR FETCHING THE ADDREX WHICH WILL FOLLOW CONTINOUS
    printf("%p\n",&arr[1]);// MEMORY ALLOCATION IN HEXA DECIMAL SYSTEM
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);

    return 0;
}