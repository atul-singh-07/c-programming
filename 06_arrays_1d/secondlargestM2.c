#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={1,2,3,4,4,3,2,1};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
            smax=max;// smax is now previous max
            max=arr[i];// max is now new max
        }
        else if(smax<arr[i]){ // this condition will run when max>arr[i]
            smax=arr[i];
        }
    }
    printf("The second largest element is:%d",smax);
    return 0;
}
// note: This code is beautifully designed for finding second Value from an array 
//       # It has a limitation that it is only valid for increasing arrays and decreasing
//         array but fails when we have array like {1,2,3,4,4,3,2,1} when two elements are
//         Adjacent to each other.