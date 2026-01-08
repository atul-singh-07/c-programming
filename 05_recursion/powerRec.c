#include<stdio.h>
int power(int a, int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a;
    printf("ENTER BASE: ");
    scanf("%d",&a);
    int b;
    printf("ENTER THE POWER OR EXPONENT :");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d RAISED TO THE POWER %d IS: %d",a,b,p);
    return 0;
}