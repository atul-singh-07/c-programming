#include<stdio.h>
int main(){
    float x;
    printf("ENTER POSITIVE FLOAT VALUE:");
    scanf("%f",&x);
    int y;// WE ARE TAKING INT Y AND WITH Y = X BECAUSE Y IS INTEGER HOLDER AND WILL CONVERT 
    y = x;// FLOAT VALUE TO INTEGER EX: IF WE ARE GIVING INPUT 5.8 THEN IT WILL GET STORED IN
    float fractional;//X AND BECAUSE Y = X THEN INT Y = 5 
    fractional = x-y;// HERE 5.8-5.0=0.8 
    printf("FRACTIONAL VAUE OF %f is:%f",x,fractional);
    return 0;
}