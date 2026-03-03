#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int product=1;
    for(int i=0;i<=4;i++){
        product=product*arr[i];
    }
    printf("The product of all the element of the array arr is:%d",product);
    return 0;
}