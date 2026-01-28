// Find the total number of pairs in the array whose sum is equal to the given value of X.
// and also print those pairs
#include<stdio.h>
int main(){
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    int arr[8]={1,2,3,4,5,6,7,8};
    int count=0;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){ 
            if(arr[i]+arr[j]==x){
            count++;
            printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("The total number of pairs count is:%d",count);
    return 0;
}