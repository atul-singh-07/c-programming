#include<stdio.h>
void reversepart(int arr[],int si,int ei){
    for(int i=si,j=ei;i<=j;i++,j--){// si=starting index; ei=ending index
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    reversepart(arr,0,2);// HERE WE ARE PASSING THE INDEX VALUE TO REVERSE
    for(int i=0;i<=6;i++){
        printf("%d",arr[i]);
    }
    return 0;
}