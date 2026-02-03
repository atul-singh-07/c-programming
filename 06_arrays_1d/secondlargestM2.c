// here in this code we are finding smax but this code will only work for increasing arrays.
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=7;i++){
        if(max<arr[i]){ 
            smax=max;
            max=arr[i];
        }
    }
    printf("The second largest element of the array is:%d",smax);
    return 0;
}
// note: this code is working on a very classical logic of using statements before or after
//       as here when max is getting the largest value of the array then smax will always
//       get second largest element as when max=largest value the loop terminates leaving
//       behind smax=second largest element 


// ERROR: But this piece of code is only valid for increasing arrays.