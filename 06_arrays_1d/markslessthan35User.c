#include<stdio.h>
int main(){
    int arr[10];
    // taking input from user
    for(int i=0;i<=9;i++){
        printf("Enter number %d:",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<=9;i++){
        if(arr[i]<35) printf("%d\n",i);
    }
    return 0;
}