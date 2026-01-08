#include<stdio.h>
void reverse(int arr[]){
    int i=0;// STARTING INDEX
    int j=6;// ENDING INDEX
    while(i<j){//           TO SWAP i WITH j TILL THE CONDITION IS TRUE
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr);
    for(int i=0;i<=6;i++){// FOR PRINTING THE ARRAY
        printf("%d",arr[i]);
    }
    return 0;
}