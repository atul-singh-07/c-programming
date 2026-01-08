#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("ENTER ROW OF FIRST MATRIX:");
    scanf("%d",&a);
    printf("ENTER COLUMN OF FIRST MATRIX:");
    scanf("%d",&b);
    printf("ENTER ROW OF SECOND MATRIX:");
    scanf("%d",&c);
    printf("ENTER COLUMN OF SECOND MATRIX:");
    scanf("%d",&d);
    int arr[a][b];
    int brr[c][d];
    int res[a][d];
    printf("ENTER THE ELEMENT OF FIRST MATRIX:");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("ENTER THE SECOND MATRIX:");
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\n");
    // MULTIPLICATION
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            res[i][j]=0;
            for(int k=0;k<d;k++){
                res[i][j]=res[i][j]+arr[i][k]*brr[k][j];
            }
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            printf("%d",res[i][j]);
        }
        printf("\n");
    }
    return 0;

}