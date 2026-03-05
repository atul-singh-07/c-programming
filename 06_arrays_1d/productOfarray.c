// Q: Calculate the product of all the elements in the given array.

#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int product=1;
    for(int i=0;i<=4;i++){
        product=product*arr[i];
    }
    printf("The product of all the element in tha array is:%d",product);
    return 0;
}