#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int permutation(int n,int r){
    int npr=factorial(n)/factorial(n-r);
    return npr;
}
int main(){
    int n;
    printf("ENTER N: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int icj=permutation(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }

    return 0;
}