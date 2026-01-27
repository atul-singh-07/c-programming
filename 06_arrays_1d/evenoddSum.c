// Find the difference between the sum of elements at even indices to the sum of element 
//at the odd indices.
#include<stdio.h>
int main(){
    int arr[6]={1,3,5,7,9,11};
    int sumeven=0;
    int sumodd=0;
    for(int i=0;i<=5;i++){
        if(i%2==0) sumeven=sumeven+arr[i];// even indices values
        else sumodd=sumodd+arr[i];// odd indices values
    }
    printf("The difference is:%d",sumeven-sumodd);
    return 0;
}