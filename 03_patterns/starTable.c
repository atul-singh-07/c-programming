#include<stdio.h>
int main(){
    // *********
    // **** ****         nsp-->1
    // ***   *** --->n=4 nsp-->3
    // **     **         nsp-->5 nsp=nsp+2
    // *       *         nsp-->7
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    for(int t=1;t<=2*n+1;t++){// printing **********
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){// for stars
            printf("*");
        }
        for(int k=1;k<=nsp;k++){// for spaces
            printf(" ");
        }
        for(int j=1;j<=nst;j++){// for stars same as the first inner loop
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}