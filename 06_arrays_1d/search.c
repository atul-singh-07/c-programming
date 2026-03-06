#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x;
    printf("Enter X:");
    scanf("%d",&x);
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            printf("The element is present at index:%d",i);
            break; // this will stop the iteration as soon we found the element 
            // and removing break we can search duplication of numbers too
        }
    }
    return 0;
}