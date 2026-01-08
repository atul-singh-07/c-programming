#include<stdio.h>// ONLY VALID FOR INCREASING ARRAY
#include<limits.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=4;i++){
        if(max<arr[i]){
            smax=max;// THIS WILL HOLD THE PREVIOUS MAX VALUE
            max=arr[i];// THIS WILL HOLD THE MAXIMUM VALUE AND WILL PASS THE SECOND LARGEST
        }// VALUE TO SMAX;
    }
    printf("THE SECOND LARGEST VALUE IS:%d",smax);
    return 0;
}