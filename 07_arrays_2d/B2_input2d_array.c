#include<stdio.h>
int main(){
    int r;
    printf("Enter number of row:");
    scanf("%d",&r);
    int c;
    printf("Enter number of column:");
    scanf("%d",&c);
    int arr[r][c];
    // Taking input to the 2d array
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element [%d %d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    // printing Array
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}