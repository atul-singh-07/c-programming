#include<stdio.h>
int main(){
    int n,quotient,remainder;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    quotient=n/2;//DIVIDING BY TWO FOR CHECKING EVEN CONDITION THEN 2 BECOME DIVISOR TOO
    remainder=n-(2*quotient);//BY USING BASIC MATHS FOTMULA WE CAN FIND REMAINDER WITHOUT
    if(remainder==0){//MODULUS OPERATOR [DIVISOR*QUOTIENT+REMAINDER=DIVIDENT]
        printf("EVEN NUMBER");
    }
    else{
        printf("ODD NUMBER");
    }
    return 0;
}//FOR BETTER UNDERSTANDING READ NOTEBOOK AND DRY RUN THE PROGRAM:::::::