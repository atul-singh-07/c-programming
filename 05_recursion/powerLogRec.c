#include<stdio.h>
int powerlog(int a, int b){
    if(b==0) return 1;
    int x=powerlog(a,b/2);
    if(b%2==0) return x*x;
    else return x*x*a;
}
int main(){
    int a;
    printf("ENTER THE BASE: ");
    scanf("%d",&a);
    int b;
    printf("ENTER THE POWER OR EXPONENT: ");
    scanf("%d",&b);
    int p= powerlog(a,b);
    printf("%d",p);
    return 0;
}