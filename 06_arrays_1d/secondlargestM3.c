#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={8,7,6,5,4,3,2,1};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}// So now, when we are taking a decreasing array, we are finding an error that the SMax is 
 // returning the int_min value.

 // As when we are dry running the code we can see a clear error that when max=8 then on the
 // condition check of (max<arr[i]) max is never get smaller than arr[i] as max have largest
 // value already stored
