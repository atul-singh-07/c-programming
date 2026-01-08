#include<stdio.h>
int main(){
    int n,lastdigit;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        lastdigit=n%10;
        if(lastdigit%2==0){
            sum=sum+lastdigit;
        }
        n=n/10;
    }
    printf("THE SUM OF EVEN NUMBER IS:%d",sum);
    return 0;
}