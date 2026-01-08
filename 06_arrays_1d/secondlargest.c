#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int max=INT_MIN;
    int smax=INT_MIN;// SMAX -> SECOND LARGEST VALUE
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
            max=arr[i];// MAX=8
        }
    }
    for(int i=0;i<=7;i++){
        if(max!=arr[i]&& smax<arr[i]){// THIS CONDITION max!=arr[i] is removing the largest
            smax=arr[i];// value from the array for the second loop.
        }
    }
    printf("THE SECOND LARGEST VALUE OF ARRAY IS:%d",smax);// SMAX=7
    return 0;
}// QUESTION WAS TO FIND SECOND LARGEST VALUE FROM THE ARRAY