#include<stdio.h>
#include<math.h>// IMPORT MATH.H LIBRARY
int main(){
    int a;
    printf("ENTER A:");
    scanf("%d",&a);
    int b;
    printf("ENTER B:");
    scanf("%d",&b);
    int power=pow(a,b);// USING POWER FUNCTION OF MATH LIBRARY
    printf("THE %d RAISED TO %d IS:%d",a,b,power);
    return 0;
}