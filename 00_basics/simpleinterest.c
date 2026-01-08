#include<stdio.h>
int main(){
    float principal,rate,time,si;
    printf("ENTER PRINCIPAL VALUE: ");
    scanf("%f",&principal); // WE ARE USING SCANF FUNCTION FOR TAKING INPUT FROM THE USER
    printf("ENTER RATE : ");//& IS USED FOR ACCESSING THE LOCATION OF THE VARIABLE IN THE SYSTEM
    scanf("%f",&rate);
    printf("ENTER TIME: ");
    scanf("%f",&time);
    si = (principal*rate*time)/100;
    printf("THE SIMPLE INTEREST IS:%f",si);
    return 0;
}