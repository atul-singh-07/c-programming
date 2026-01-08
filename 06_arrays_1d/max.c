#include<stdio.h>
int main(){
    int arr[7]={1,4,5,55,6,46,6};
    int max=-1;// INITIALISING MAX WITH -1 AS IT WILL WE THE SMALLEST AMONG THE ARRAY
    for(int i=0;i<=6;i++){// BUT THIS CODE HAS LIMITATION IN CASE OF NEGATIVE ARRAY
        if(max<arr[i]){//    WHICH IS BEING SOLVED WITH MAX ULTIMATE CODE.
            max=arr[i];
        }
    }
    printf("THE MAXIMUM VALUE OF ARRAY IS: %d",max);
    return 0;
}