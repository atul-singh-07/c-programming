#include<stdio.h>
int main(){
    int arr[5];
    // for loop to take input 
    for(int i=0;i<=4;i++){
        printf("Enter number %d:",i+1);
        scanf("%d",&arr[i]);
    }

    // now applying for loop in reverse order
    for(int i=4;i>=0;i--){// for loop with opposite condition and decrement
        printf("%d ",arr[i]);
    }
    return 0;
}