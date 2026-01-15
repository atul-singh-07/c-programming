#include<stdio.h>
int factorial(int x){// calculating factorial function
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n, int r){// calculating combination function
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int nsp=n;
    for(int i=0;i<=n;i++){// loop for spaces
        for(int t=1;t<=nsp;t++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);// function calling by call by values
            printf("%d ",icj);
        }
        printf("\n");
        nsp--;
    }
    return 0;
}