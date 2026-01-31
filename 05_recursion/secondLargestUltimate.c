#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={8,8,6,4,4,3,2,1};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
        smax=max;
        max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
    printf("The second largest element is:%d",smax);
    return 0;
}