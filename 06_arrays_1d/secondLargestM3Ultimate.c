#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={1,2,3,4,4,3,2,1};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && arr[i]!=max){// by having a little change we are getting our
            smax=arr[i];//                     ulitmate code
        }
    }
    printf("The second largest element is:%d",smax);
    return 0;
}
