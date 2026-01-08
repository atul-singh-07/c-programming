#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int sum =0;
    // 1-2+3-4+5-6.....n
    for(int i=1;i<=n;i++){
        if(i%2!=0) sum=sum+i;// ODD-> POSITIVE
        else sum=sum-i;// EVEN-> NEGATIVE
    }
    printf("THE SUM OF THIS SERIES:%d",sum);
    return 0;
}