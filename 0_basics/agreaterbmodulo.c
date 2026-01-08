#include<stdio.h>
int main() {
    int a,b,remainder;
    printf("ENTER DIVIDENT:");
    scanf("%d",&a);
    printf("ENTER DIVISOR:");
    scanf("%d",&b);
    remainder = a%b;//WE USE MODULOS OPERATOR FOR FINDING THE REMAINDER WHEN A>B
    printf("WHEN %d IS DIVIDED WITH %d THEN REMAINDER IS:%d",a,b,remainder);
    return 0;
}