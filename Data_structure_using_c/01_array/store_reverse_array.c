#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int arr[n];
    int brr[n];
    // taking input to the array
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    // reverse storing the array
    for(int i=0;i<=n-1;i++){
        brr[i]=arr[(n-1)-i];
    }

    // printing brr array
    for(int i=0;i<=n-1;i++){
        printf("%d ",brr[i]);
    }

    return 0;
}