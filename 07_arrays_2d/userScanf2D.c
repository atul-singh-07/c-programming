#include<stdio.h>
int main(){
    int r;// NUMBER OF ROWS
    printf("ENTER THE NUMBER OF ROWS:");
    scanf("%d",&r);
    int c;// NUMBER OF COLUMNS
    printf("ENTER THE NUMBER OF COLUMNS:");
    scanf("%d",&c);
    int arr[r][c];
    printf("ENTER THE ELEMENTS OF 2D ARRAY:");
    for(int i=0;i<r;i++){// THIS LOOP FOR SCANNING VALUES
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){// THIS LOOP FOR PRINTING VALUES
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");// ENTER
    }
    return 0;
}