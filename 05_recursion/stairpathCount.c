#include<stdio.h>
int stair(int n){
    // BASE CASES
    if(n==1) return 1;// when n==1 at this we will have only one way to jump 
    if(n==2) return 2;// when n==2 then we will have only two ways to jump
    int totalways= stair(n-1)+stair(n-2);// by rule as we can jump one step or two step
    return totalways;
}
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    printf("%d",stair(n));
    return 0;
}