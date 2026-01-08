#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int sumEven=0;// 1+3+5+7=16
    int sumOdd=0;// 2+4+6=12 // AND THE OUTPUT COMING IS 4
    int difference;
    for(int i=0;i<=6;i++){
        if(i%2==0){
            sumEven=sumEven+arr[i];
        }
        else{
            sumOdd=sumOdd+arr[i];
        }
    }
    difference=sumEven-sumOdd;
    printf("%d",difference);
    return 0;
}// QUESTION WAS TO FIND THE DIFFERNCE BETWEEN THE SUM OF ELEMENT AT EVEN INDICES TO THE 
// SUM OF ELEMENTS AT ODD INDICES