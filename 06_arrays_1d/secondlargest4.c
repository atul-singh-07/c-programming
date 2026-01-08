#include<stdio.h>// NOW THIS WILL WORK FOR ALL CONDITION OF ARRRAYS
#include<limits.h>
int main(){
    int arr[7]={1,2,3,4,4,1,2};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
    printf("THE SECOND LARGEST VALUE OF ARRAY IS :%d",smax);
    return 0;
}