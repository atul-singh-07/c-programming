#include<stdio.h>
void palindrome(int arr[],int n){
    int i=0;// STARTING INDEX
    int j=n-1;// ENDING INDEX
    while(i<j){// THE LOOP WILL RUN TILL THE CONDITION WHERE i is getting equal to j
        if(arr[i]==arr[j]){
        printf(" PALINDROME ARRAY");
        break; // FOR STOPPING INFINITE LOOP
        }
          
        else{
            printf("NOT PALINDROME");
            break;// FOR STOPPING INFINITE LOOP
        }
    }
}
int main(){
    int n;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("ENTER NUMBER %d",i+1);
        scanf("%d",&arr[i]);
    }
    palindrome(arr,n);
    return 0;
}