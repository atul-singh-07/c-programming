#include<stdio.h>
int power(int a, int b){
    int x=1;
    for(int i=1;i<=b;i++) x=x*a;
    return x;
}
int main(){
    int a , b;
    printf("ENTER THE BASE: ");
    scanf("%d",&a);
    printf("ENTER THE EXPONENT OR POWER :");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d RAISED TO THE POWER %d IS: %d",a,b,p);
    return 0;
}