#include<stdio.h>
int main(){
    int r;
    printf("ENTER THE NUMBER OF ROWS OF A MATRIX:");
    scanf("%d",&r);
    int c;
    printf("ENTER THE NUMBER OF COLUMNS OF THE MATRIX:");
    scanf("%d",&c);
    printf("ENTER ALL THE ELEMENT OF THE MATRIX:");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");// THIS IS FOR SEPERATION OF ENTERED MATRIX WITH PRINTED MATRIX AT OUTPUT

    for(int i=0;i<r;i++){// THIS LOOP IS FOR PRINTING THE ELEMENT OF MATRIX
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum=0;// THIS LOOP IS SUMMING ALL THE ELEMENTS OF THE MATRIX
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("%d IS THE TOTAL SUM OF THE ELEMENT OF THE MATRIX",sum);
    return 0;
}