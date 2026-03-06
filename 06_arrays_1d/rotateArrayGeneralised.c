#include<stdio.h>
void reverse(int arr[],int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int n;
    printf("Enter the size of the Array:");
    scanf("%d",&n);
    // taking input to the array by the user
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int k;// taking input the number of step to rotate the array by user
    printf("Enter the step By which u want to Rotate the Array:");
    scanf("%d",&k);
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);

    // printing the array after all func call and rotation 
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}