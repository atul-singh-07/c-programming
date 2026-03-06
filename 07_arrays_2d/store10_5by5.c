#include<stdio.h>
int main(){
    int arr[5][5];
    // Designing this loop for entering 10 at every cell of matrix
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=10;
        }
    }
    // printing the 2d array
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// Output:
// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10