// Q: Find the difference between the sum of element at even indices To the sum of element 
//    at odd indices.

#include<stdio.h>
int fun(int arr[]){
    int sumEven=0;
    int sumOdd=0;
    for(int i=0;i<=5;i++){
        if(i%2==0) sumEven=sumEven+arr[i];// 1+5+9=15
        else sumOdd=sumOdd+arr[i];// 3+7+11=21
    }
    return sumEven-sumOdd;
}
int main(){
    int arr[6]={1,3,5,7,9,11};
    int difference=fun(arr);
    printf("Differnece:%d",difference);// 15-21=-6
    return 0;
}