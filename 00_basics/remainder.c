#include<stdio.h>
int main(){
    int a,b;// a>b
    printf("ENTER DIVIDENT:");
    scanf("%d",&a);
    printf("ENTER DIVISOR:");
    scanf("%d",&b);
    int q = a/b;// HERE WE WILL GET QUOTIENT VALUE BY DIVIDING A BY B AS WE ARE USING INT FUNCTION   
    int r = a-(b*q);// THAT WILL RETURN US QUOTIENT VALUE BY THE FORMULAE 
    printf("THE REMAINDER WHEN %d IS DIVIDED BY %d IS:%d",a,b,r);// REMAINDER = DIVIDENT-DIVISOR*QUOTIENT
    return 0;// WHICH IS EQUAL TO r = a-(b*q)
}