#include<stdio.h>
int main(){
    int n;
    printf("Enter the Size of Array:");
    scanf("%d",&n);

    int arr[n+1];// creating a extra space for inserting the element 

    // Taking element to the array.
    for(int i=0;i<=n-1;i++){
        printf("Enter Element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    int pos, value;
    printf("Enter Position to insert:");
    scanf("%d",&pos);

    printf("Enter the value to insert:");
    scanf("%d",&value);

    // moving the array to right from the position we need to insert the array

    for(int i=n;i>=pos;i--){// now this loop will create a space to insert the element by
        arr[i]=arr[i-1];// moving the other elements to the right
    }

    arr[pos-1]=value;

    // Printing the array after the insertion changes
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}