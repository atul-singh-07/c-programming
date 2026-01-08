#include<stdio.h>
int main(){
    int n, lastdigit;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        lastdigit=n%10;//GIVING THE LAST NUMBER
        sum=sum+lastdigit;
        n=n/10;// REMOVING THE LAST NUMBER
    }
    printf("THE SUM OF DIGITS IS:%d",sum);
    return 0;
}