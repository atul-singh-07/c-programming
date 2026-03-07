#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of Rows:");
    scanf("%d",&n);
    int m;
    printf("Enter tne number of columns:");
    scanf("%d",&m);
    int arr[n][m];

    // taking input to the 2d array
    printf("Enter the element to the 2d Array:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // finding the minimum value of element from the 2d array created
    int min=arr[0][0];
    int index_i=0;
    int index_j=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(min>arr[i][j]){
                min=arr[i][j];
                index_i=i;// storing the index value i
                index_j=j;// storing the index value j
            }
        }
    }
    printf("The minimum value of element is:%d at index (%d,%d)",min,index_i,index_j);
    return 0;
}