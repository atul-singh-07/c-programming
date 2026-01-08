#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int sum=0;
    // 1+2+3+4+5........n
    for(int i;i<=n;i++){
        sum=sum+i;
    }
    printf("THE SUM OF NUMBER TILL N IS :%d",sum);
    return 0;
}