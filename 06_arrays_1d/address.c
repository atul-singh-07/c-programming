#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);
    return 0;
}
// 0061FF0C
// 0061FF10
// 0061FF14   this is the address that is following the hexa decimal system 
// 0061FF18
// 0061FF1C
// note: hexadecimal system---> 0 1 2 3 4 5 6 7 8 9 a b c d e f 