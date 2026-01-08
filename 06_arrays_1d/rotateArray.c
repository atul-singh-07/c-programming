#include<stdio.h>// CONCEPT CODE THE USER CODE IS IN ANOTHER FILE
void reverse(int arr[],int si,int ei){
    for(int i=si, j=ei;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int n=7;
    int k=3;// NUMBER OF ELEMENT TO REVERSE
    //step
    k=k%n;
    reverse(arr,0,n-1);// COMPLETE ARRAY REVERSE
    reverse(arr,0,k-1);// REVERSE THE ARRAY FROM 0 INDEX T0 INDEX K-1
    reverse(arr,k,n-1);// REVERSE THE ARRAY FROM K INDEX TO N-1 INDEX
    // for printing the rotated values
    for(int i=0;i<=n-1;i++){
        printf("%d",arr[i]);
    }

    return 0;
}