#include<stdio.h>
int main(){ 
    int arr[6]={1,2,5,3,8,9};
    int product=1;// INITIALISING WITH ONE AS 0 IN MULTIPLICATION MAKES EVERYTHING ZERO
    
    for(int i=0;i<=5;i++){
        product=product*arr[i];
    }
    printf("THE PRODUCT OF THE NUMBER OF ARRAY IS:%d",product);
    return 0;
}