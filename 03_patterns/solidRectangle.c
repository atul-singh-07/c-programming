#include<stdio.h>
int main(){
    int n,m;
    printf("ENTER THE NUMBER OF ROWS:");
    scanf("%d",&n);
    printf("ENTER THE NUMBERS OF COLUMNS:");
    scanf("%d",&m);
    // **********.......upto n no.of star
    for(int i=1;i<=n;i++){// outer loop->no. of lines
        for(int i=1;i<=m;i++){//inner loop-> no.of stars in each line
            printf("*");
        }
        printf("\n");// har line ke baad ek enter marne ke liye
    }
    return 0;
}