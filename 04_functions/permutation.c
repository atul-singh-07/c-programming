#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int nPr(int n, int r){
    return factorial(n)/factorial(n-r);
}
int main(){
    int n;
    printf("ENTER N:");
    scanf("%d",&n);
    int r;
    printf("ENTER R:");
    scanf("%d",&r);
    int result=nPr(n,r);
    printf("THE PERMUTATION OF BOTH NUMBERS IS:%d",result);
    return 0;
}