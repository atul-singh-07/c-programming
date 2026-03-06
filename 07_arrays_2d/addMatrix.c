#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns:");
    scanf("%d",&c);
    int arr[r][c];
    int brr[r][c];
    int res[r][c];
    // taking input for first matrix
    printf("Enter The element of First Matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // taking input for second matrix
    printf("Enter The element of Second Matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&brr[i][j]);
        }
    }

    // performing addition in res 2d array
    printf("Matrix with addition is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            res[i][j]=arr[i][j]+brr[i][j];
        }
    }

    // printing the matrix res with addition of arr and brr
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}