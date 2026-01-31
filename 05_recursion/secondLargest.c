// Find the second largest element in the given array
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[10]={2,3,1,4,5,7,8,9,87,23};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=9;i++){
        if(max<arr[i]) 
        max=arr[i];
    }
    // max=87
    
    // now applying loop for finding smax:secondmax
    for(int i=0;i<=9;i++){
        if(arr[i]!=max && smax<arr[i]) 
        smax=arr[i];
    }
    printf("The second largest element of the array is:%d",smax);// smax=23
    return 0;
}
// note: What we are doing in the second loop is simply we are ignoring the maximum value 
//       to get that S Max value as the approach is the same as the previous loop. 
//       Just adding a condition to neglecting that maximum value.