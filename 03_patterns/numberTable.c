#include<stdio.h>// this code is completely same as that of the startable.c with some minor 
int main(){//       changes like printing numbers
    //  1 2 3 4 5 6 7 
    //  1 2 3   5 6 7 
    //  1 2       6 7
    //  1           7
    int n;
    printf("ENTER A  NUMBER:");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int t=1;t<=2*n+1;t++){
        printf("%d ",t);// here we are printing the first line seperately
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;// initialised a with 1 that contain all the values to be printed futher
        for(int j=1;j<=nst;j++){
            printf("%d ",a);
            a++;// incrementing a at every iteration
        }
        for(int k=1;k<=nsp;k++){
            printf("  ");
            a++;// NOTE: a is incrementing when spaces are printing means neglecting numbers
        }
        for(int j=1;j<=nst;j++){
            printf("%d ",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");

    }
    return 0;
}