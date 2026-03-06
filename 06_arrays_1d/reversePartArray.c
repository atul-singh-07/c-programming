#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    // reverse part of array from index 1 to index 4 resulting in {1,5,4,3,2,6,7}
    for(int i=1,j=4;i<j;i++,j--){// just shnge i and j to control which part to reverse
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    // printing the array with reversed part of the array
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}