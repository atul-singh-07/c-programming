#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    //3 12 48 ..... GP
    int a=3;// extra variable containing first value of GP
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a*4;// because the common ratio in given series is 4
    }
    return 0;
}