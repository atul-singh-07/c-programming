// Q: Find out the maximum element.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of Rows:");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columns:");
    scanf("%d",&m);
    int arr[n][m];
    printf("Enter Element to the Array:\n");
    // taking input to the 2d array by the user
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // finding the maximum element 
    int max=arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    printf("Tha maximum element of the array is:%d",max);
    return 0;
}