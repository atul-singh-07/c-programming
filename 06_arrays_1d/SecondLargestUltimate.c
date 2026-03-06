// Q: Find the second largest element in the given array.
//    [Method:01]
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=7;i++){
        if(max<arr[i]) max=arr[i];
    }

    // max:8
    
    for(int i=0;i<=7;i++){
        if(arr[i]!=max && smax<arr[i]) smax=arr[i];
    }
    printf("Second largest:%d",smax);
    return 0;
}
// The approach will be like, we will use the max value again. We will run the same loop 
// again with a change in condition. What we are doing in the 2nd loop is simply, we are 
// ignoring the max value to get that SMax value, in the condition