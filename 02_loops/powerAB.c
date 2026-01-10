#include<stdio.h>
int main(){
    int a;
    printf("ENTER A:");
    scanf("%d",&a);
    int b;
    printf("ENTER B:");
    scanf("%d",&b);
    int power=1;// INITIALIZE POWER WITH 1
    for(int i=1;i<=b;i++){// RUN THE LOOP TILL B
        power = power *a ;
    }
    printf("THE RESULT IS:%d",power);
    return 0;
}