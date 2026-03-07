#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columns:");
    scanf("%d",&m);
    int arr[n][m];

    // taking input to the matrix
    printf("Enter Element to the Matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // calculating the total sum of the created 2d array
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("The sum of total 2d array is:%d",sum);
    return 0;
}