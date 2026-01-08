#include<stdio.h>
int main(){
    int year;
    printf("ENTER THE YEAR:");
    scanf("%d",&year);
    if (year%4==0){// EVERY LEAP YEAR ARRIVE ON EVERY FOUR YEAR FOR THAT WE USED MODULUS FUNCTION DETRMINING THAT THE 
        printf("IT IS A LEAP YEAR");//ENTERED YEAR IS COMPLETELY DIVISIBLE BY FOUR
    }
    else{
        printf("IT IS NOT A LEAP YEAR");
    }
    return 0;
}