#include<stdio.h>
int main(){
    int n;
    printf("Enter the Size:");
    scanf("%d",&n);

    int arr[n];
    // Taking input from the User
    for(int i=0;i<=n-1;i++){
        printf("Enter Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // main thing to look
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    // Sorted Array printing
    printf("Sorted Array:");
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}