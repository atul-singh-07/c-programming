#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);
    //1 2 4 8 16 32  ......
    int a=1;//EXTRA VARIABLE WHICH IS A GLOBAL VARIABLE
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a*2;
    }
    return 0;
}