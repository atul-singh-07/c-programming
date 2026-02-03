// Write a programme to reverse the array without using any extra array.
// But we can use extra variables.
#include<stdio.h>
void reverse(int arr[],int n){
    for(int i=0,j=n-1;i<j;i++,j--){// looping two variables in one forloop
        // same swap code
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);// function call passing arr and size of the array

    // printing the reversed array after the work of reverse() get done
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}