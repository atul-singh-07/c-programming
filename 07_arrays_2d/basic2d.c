// initialization of 2d array

#include<stdio.h>
int main(){
    // 1st way of initialization 
    int arr[2][2];
    arr[0][0]=1;// 1 2
    arr[0][1]=2;// 3 4
    arr[1][0]=3;
    arr[1][1]=4;

    // 2nd way of initialization
    int brr[2][2]={{1,2},{3,4}};
    // 1 2
    // 3 4 
    return 0;
}// Note:both initialization make the same matrix