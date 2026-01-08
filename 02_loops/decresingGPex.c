#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);
    // GP = 100 50 25 WITH A COMMON RATIO=1/2
    float a=100;
    for(int i=1;i<=n;i++){
        printf("%f ",a);
        a=a*(0.5);//decresing the value of a by half in every round
    }
    return 0;
}