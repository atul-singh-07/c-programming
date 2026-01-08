#include<stdio.h>
int main(){
    int arr[7]={-10,-70,-65,-45,-23,-45,-23};
    int max=arr[0];
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }printf("THE MAX VALUE OF THE ARRAY IS:%d",max);
    return 0;
}