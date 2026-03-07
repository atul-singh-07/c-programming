#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columns:");
    scanf("%d",&m);
    int arr[n][m];
    // taking input to the array by the user
    printf("Enter the Elements:");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int maxSum=0;
    int index_i=0;
    // checking which row has the maximum sum
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            index_i=i;
        }
    }
    printf("The max Sum is:%d at row index:%d",maxSum,index_i);
    return 0;
}