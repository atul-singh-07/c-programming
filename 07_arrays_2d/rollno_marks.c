#include<stdio.h>
int main(){
    int arr[4][2]={{1,90},{2,94},{3,70},{4,88}};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}