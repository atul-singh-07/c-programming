// Q: Find the total number of pairs in the array whose sum is equal to the given number x.
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number X:");
    scanf("%d",&x);
    int arr[8]={1,2,3,4,5,6,7,8};
    int count=0;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){ // here j=i+1 to handle repetition of the pair on every iteration
            if(arr[i]+arr[j]==x){
                count++;
                printf("(%d %d)\n",arr[i],arr[j]);
        }
    }
    }
    printf("Total pair with sum =%d is: %d",x,count);
    return 0;
}
// Note: Here we have J=i+1, as when we start pairing, we take the first element, which is 
// being paired with others to Cheque for the sum, but we should not repeat pair for that. 
// When i=0 then J=1 as Arr[0] which is the first element, and Arr[1] is the second element