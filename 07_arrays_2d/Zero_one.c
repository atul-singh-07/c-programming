#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columns:");
    scanf("%d",&m);
    // taking input to the 2d array by the user
    printf("Enter the element to the 2d array:");
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // checking rows for maximum number of one's
    int count=0;// for counting number of ones
    int index_i=0;
    for(int i=0;i<n;i++){
        int ones=0;
        for(int j=0;j<m;j++){
            if(arr[i][j]==1){
                ones++;
            }
        }
        if(ones>count){
            count=ones;
            index_i=i;
        }
    }
    printf("The row with max Number of 1's is:%d and count of 1's is:%d",index_i,count);
    return 0;
}