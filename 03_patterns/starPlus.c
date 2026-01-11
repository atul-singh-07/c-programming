#include<stdio.h>// WORK ONLY FOR ODD NUMBER AS THE STAR PATTERN IS FORMED FOR ODD NUMBER ONLY
int main(){
    int n;
    printf("ENTER A NUMBER FOR PATTERN PRINTING:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=n/2+1;// the condition by which we get the middle row and column of pattern to apply condition 
        for(int j=1;j<=n;j++){
            if(i==a || j==a) printf("*");
            else printf(" ");// for printing star plus we need to print space here instesd of hash
        }
        printf("\n");
    }
    return 0;

}
