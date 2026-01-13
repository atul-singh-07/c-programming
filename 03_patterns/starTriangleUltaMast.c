#include<stdio.h>
int main(){
    // * * * * ---> here in first line nsp=0 which is the reason of initializatin of nsp=0
    //   * * *      and in the same line ex:nst=4 which is actually n
    //     * *
    //       *
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int nsp=0;
    int nst=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){// this loop is for printing spaces
            printf("  ");
        }
        for(int k=1;k<=nst;k++){// this loop is for printing stars
            printf("* ");
        }
        nsp++;// nsp containing 0 1 2 3 ....n
        nst--;// nst containing n......3 2 1 0
        printf("\n");
    }
    return 0;
}