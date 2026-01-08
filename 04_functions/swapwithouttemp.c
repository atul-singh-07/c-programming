#include<stdio.h>
int main(){
    int a;
    printf("ENTER A: ");
    scanf("%d",&a);
    int b;
    printf("ENTER B: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("THE VALUE OF A IS:%d\n",a);
    printf("THE VALUE OF B IS:%d",b);
    return 0;
}