#include<stdio.h>
int main(){
    int r;
    printf("ENTER THE NUMBER OF STUDENTS OR ROWS:");
    scanf("%d",&r);
    int arr[r][3];
    for(int i=0;i<r;i++){
        for(int j=0;j<3;j++){
            if(j==0) printf("ENTER MARKS OF P:");//WHEN THIS WIIL HIT OTHER TWO GET SKIPPED
            else if(j==1) printf("ENTER MARKS OF C:");
            else if(j==2) printf("ENTER MARKS OF M:");
            scanf("%d",&arr[i][j]);// THEN THIS STATEMENT RUN
        }
    }    
    printf("\n"); // JUST FOR AN ENTER ON OUTPUT SCREEN
    for(int i=0;i<r;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}// MAJA AA GAYA SELF THINKED AND COMPLETELY DEVELOPED CODE 