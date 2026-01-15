#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("ENTER N: ");
    scanf("%d",&n);
    int r;
    printf("ENTER R: ");
    scanf("%d",&r);
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));// here three value will pass on to
    printf("%d",ncr);//                                   the function one by one and then will return for calculation
    return 0;

}
