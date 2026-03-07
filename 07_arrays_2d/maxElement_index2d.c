// Q: Find out the maximum element and the index of maximum element.
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
    int max=arr[0][0];// ---> storing the frst element of 2d array in max variable
    int index_i=0;
    int index_j=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
                index_i=i;// for storing the last index value i
                index_j=j;// for storing the last index value j
            }
            
        }
    }
    printf("Tha maximum element of the array is:%d at index (%d,%d)",max,index_i,index_j);
    return 0;
}