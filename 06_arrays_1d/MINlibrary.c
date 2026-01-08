#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={1,2,3,4,-9};
    int min=INT_MAX;// HERE THIS WILL RETURN THE LARGEST NUMBER FOR COMPARISON
    for(int i=0;i<=4;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d",min);

    return 0;
}