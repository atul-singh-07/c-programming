#include<stdio.h>
int main(){
    int n,m;
    printf("ENTER THE NUMBER OF ROWS OF HOLLOW RECTANGLE:");
    scanf("%d",&n);
    printf("ENTER THE NUMBER OF COLUMN OF HOLLOW RECTANGLE:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1||j==1||i==n||j==m) printf("*");// all role of or condition explanation
            else printf(" ");// in notes
        }
        printf("\n");
    }
    return 0;
}// ON 1ST ATT