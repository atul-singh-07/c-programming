#include<stdio.h>
int main(){
    int a;
    printf("ENTER A: ");
    scanf("%d",&a);
    int b;
    printf("ENTER B: ");
    scanf("%d",&b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("THE VALUUE OF A IS:%d\n",a);
    printf("THE VALUE OF B IS:%d",b);
    return 0;
}