#include<stdio.h>
void reverse(int arr[],int si,int ei){
    for(int i=si,j=ei;i<=j;i++,j--){// I AND J ARE IN THE SAME LOOP
        // SWAPPING OF INTERGER TO REVERSE IN ARRAY
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int n;
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    int k;
    printf("ENTER THE K WHICH IS THE NUMBER TO ROTATE THE ARRAY:");
    scanf("%d",&k);
    k=k%n;// FOR HANDLING LARGE NUMBER OF K
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("ENTER NUMBER %d:",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,0,n-1);// REVERSE COMPLETE ARRAY
    reverse(arr,0,k-1);// REVERSE FROM INDEX 0 TO K-1
    reverse(arr,k,n-1);// REVERSE FROM INDEX K TO N-1;
    for(int i=0;i<=n-1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}// complete explaination on notes 
// IN BASIC WE ARE USING THE REVERSE ARRAY CODE WITH CERTAIN STEP TO ROTATE ARRAY K TIMES