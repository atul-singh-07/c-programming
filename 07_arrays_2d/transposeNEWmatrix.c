#include<stdio.h>
int main(){
    int r;
    printf("ENTER THE NUMBER OF ROWS:");
    scanf("%d",&r);
    int c;
    printf("ENTER THE NUMBER 0F COLUMNS:");
    scanf("%d",&c);
    int arr[r][c];
    printf("ENTER THE ELEMENT OF THE MATRIX:");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // WE ARE IN THIS OTHER LOOP WILL CAHNGE I AND J TO EACH OTHER TO PRINT TRANSPOSE
    //  IF WE ENTER 1 2 3
    //              4 5 6
    int brr[c][r];
    for(int i=0;i<c;i++){// C-> 3
        for(int j=0;j<r;j++){// r->2
            brr[i][j]=arr[j][i];
        }
    }
    // PRINTING THE NEW MATRIX BRR
    for(int i=0;i<c;i++){// C-> 3
        for(int j=0;j<r;j++){// r->2
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}