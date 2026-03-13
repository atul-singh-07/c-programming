#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int *p;
    p=arr;// stored the address of array in pointer p

    // printing the array arr with the help of pointer p
    for(int i=0;i<=4;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}