// Find the total number of pairs in the array whose sum is equal to the given value of X.
#include<stdio.h>
int main(){
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    int arr[8]={1,2,3,4,5,6,7,8};
    int count=0;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){ 
            if(arr[i]+arr[j]==x) count++;
        }
    }
    printf("The total number of pairs count is:%d",count);
    return 0;
}
// note:// here we have j=i+1 as when we start pairing we take the 
        // first element which is being paired with others
        // to check for the sum but we should not repeat pair for that when i=0 j should
        // be equal to 1 as arr[0] access first element and arr[1] access second element