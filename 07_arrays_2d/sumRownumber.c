#include<stdio.h>
int main(){
    int arr[3][4]={{1,2,3,1},{0,5,0,2},{9,0,0,3}};
    int maxSum=0;
    int indx=0;// THIS IS FOR STORING THE INDEX OF i -> ROW
    for(int i=0;i<3;i++){// THIS CODE IS ALSO WORKING ON THE SAME LOGIC LIKE IT WILL
        // SUM EACH ROW ONE BY ONE RESTARTING EVERY TIME FROM 0
        int sum=0;
        for(int j=0;j<4;j++){
            sum=sum+arr[i][j];
        }
        if(maxSum<sum){// IT WILL COMPARE AND STORE THE MAXIMUM VALUE OF SUM
            maxSum=sum;
            indx=i;

        }
    }
    printf("THE MAX SUM IS: %d AT ROW NUMBER:%d",maxSum,indx);
    return 0;
}