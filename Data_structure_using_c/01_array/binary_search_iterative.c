#include<stdio.h>// for sorted array element

int binary_iterative(int arr[],int n,int element){
    int low=0,high=n-1,mid;

    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element) return mid;
        else if(arr[mid]<element) return low=mid+1;
        else return high=mid-1;
    }
    return -1;
}
int main(){
    int arr[100]; // dynamic array
    int n;
    printf("Enter number of element in array(sorted):");
    scanf("%d",&n);
    
    printf("Enter element in sorted form\n");

    for(int i=0;i<=n-1;i++){
        printf("Enter element %d",i+1);
        scanf("%d",&arr[i]);
    }

    int element;
    printf("Enter the element to search in array:");
    scanf("%d",&element);

    int result=binary_iterative(arr,n,element);
    
    if(result!=-1){
        printf("iterative found at %d\n",result);
    }
    else{
        printf("iterative : element not found");
    }

    return 0;
}