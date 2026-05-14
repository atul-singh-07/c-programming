#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x;
    printf("Enter X:");
    scanf("%d",&x);

    int count=0;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(arr[i]+arr[j]==x) count++;
        }
    }

    printf("Count of Pairs is:%d",count);
    return 0;
}