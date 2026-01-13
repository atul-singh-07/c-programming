#include<stdio.h>// this code is completely same as the numberTable.c just here we need
int main(){// to type cast the numeric values containg variables like t and a 
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int t=1;t<=2*n+1;t++){
        char ch=(char)t+64;// type casting
        printf("%c ",ch);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){
            char ch=(char)a+64;// type casting
            printf("%c ",ch);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf("  ");
            a++;
        }
        for(int j=1;j<=nst;j++){
            char ch=(char)a+64;// type casting
            printf("%c ",ch);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}