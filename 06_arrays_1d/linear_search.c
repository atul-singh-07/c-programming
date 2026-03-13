#include<stdio.h>
int main(){
    int n;
    printf("Enter the Size of Array:");
    scanf("%d",&n);

    int arr[n];
    // Taking input to the array by the user
    for(int i=0;i<=n-1;i++){
        printf("Enter Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter the element to Search:");
    scanf("%d",&key);

    int found=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==key){
            found=1;
            printf("Element Found on index %d",i);
            break;
        }
    }
    if(found==0) printf("Element not founded");
    return 0;
}