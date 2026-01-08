#include<stdio.h>// WORK ONLY FOR ODD NUMBER AS THE STAR PATTERN IS FORMED FOR ODD NUMBER ONLY
int main(){
    int n;
    printf("ENTER A NUMBER FOR PATTERN PRINTING:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=n/2+1;
        for(int j=1;j<=n;j++){
            if(i==a || j==a) printf("*");
            else printf("#");// for printing only a star plus without # u need to print space
        }
        printf("\n");
    }
    return 0;
}