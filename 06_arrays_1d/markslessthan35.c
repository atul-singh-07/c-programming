#include<stdio.h>
// here we need to print the index values for which marks is less then 35
int main(){
    int arr[10]={95,90,31,25,100,50,65,89,97,30};
    for(int i=0;i<=9;i++){
        if(arr[i]<35) printf("%d\n",i);
    }
    return 0;
} 