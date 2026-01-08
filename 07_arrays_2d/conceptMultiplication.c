#include<stdio.h>
int main(){
    // 1 2
    // 3 4
    // 5 6
    int arr[3][2]={{1,2},{3,4},{5,6}};
    int brr[2][4]={{1,2,3,4},{5,6,7,8}};
    // 1 2 3 4
    // 5 6 7 8
    int cr=2;
    int res[3][4];
    // MUTIPLICATION OF MATRIX
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            // i row of a[][]and j column of b[][]
            //(a[i][0],a[i][1],a[i][2]......)*(b[0][j],b[1][j],b[2][j]......)
            res[i][j]=0;// U NEED TO INTIALISE RES[I][J] WITH ZERo BEFORE K LOOP AS WE ARE APPLYING OPERTAION AND
            for(int k=0;k<cr;k++){// THE SYSTEM CAN FETCH GARBAGE VALUES
                res[i][j]=res[i][j]+arr[i][k]*brr[k][j];
            }

        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}